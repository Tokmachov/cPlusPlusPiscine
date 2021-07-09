/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printError.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 19:09:29 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/31 12:00:27 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "printError.hpp"

void printError(int type) {
    if (type == ERROR_ARG_NUM)
        std::cout << "Error: wrong arguments number" << std::endl;
    else if (type == ERROR_OPEN_INPUT_FILE)
        std::cout << "Error: could not open file for reading" << std::endl;
    else if (type == ERROR_OPEN_ONPUT_FILE)
        std::cout << "Error: could not open file for writing" << std::endl;
    else if (type == ERROR_EMPTY)
        std::cout << "Error: searched or replacer string are empty" << std::endl;
    else 
        std::cout << "Error: unknown error" << std::endl;
}
