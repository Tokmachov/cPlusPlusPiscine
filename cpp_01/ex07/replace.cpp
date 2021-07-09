/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:07:24 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/31 12:05:04 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printError.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

static void cpyFileToStr(const std::ifstream &ifs, std::string &buff) {
    std::stringstream strStream;
    strStream << ifs.rdbuf();
    buff = strStream.str();
}

static void substInFile(std::ofstream &dst_f, const std::ifstream &src_f, std::string searched, std::string replacer) {
    std::string     buffer;
    size_t          searched_pos;
    std::ofstream   ofs;
    
    cpyFileToStr(src_f, buffer);
    searched_pos = 0;
	while ((searched_pos = buffer.find(searched, searched_pos)) != std::string::npos) {
		buffer.replace(searched_pos, searched.length(), replacer);
        searched_pos++;
    }
	dst_f << buffer;
}

int main(int argc, char **argv) {
    std::string		fileName;
    std::string		searched;
    std::string		replacer;
	std::ifstream	ifs;
    std::ofstream	ofs;
	
	if (argc != 4)
    {
        std::cout << argc << std::endl;
		printError(ERROR_ARG_NUM);
        return 0;
    }
    fileName = argv[1];
    searched = argv[2];
    replacer = argv[3];
    if (searched.empty() || replacer.empty())
    {
        printError(ERROR_EMPTY);   
        return (1);
    }
    ifs.open(fileName, std::ifstream::in);
    if (ifs.fail())
    {
        printError(ERROR_OPEN_INPUT_FILE);
        return 1;
    }
    ofs.open(fileName + ".replace", std::ifstream::out);
	if (ofs.fail())
    {
        printError(ERROR_OPEN_ONPUT_FILE);
        return 1;
    }
	substInFile(ofs, ifs, searched, replacer);
    ifs.close();
	ofs.close();
    return 0;
}
