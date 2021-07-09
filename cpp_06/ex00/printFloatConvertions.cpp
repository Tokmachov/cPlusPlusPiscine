/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printFloatConvertions.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:49:21 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 18:44:15 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits> // for numeric limits
#include <errno.h> // for out of range checks when parsing float
#include "convertion.hpp"

// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

#include <iostream>

void printFloatConvertions(std::string s)
{
    float parsed_float;
    double d;
    char c;
    int i;
    
    errno = 0;
    parsed_float = strtof(s.c_str(), NULL);
    if (errno == ERANGE)
    {
        std::cout << "Here" << std::endl;
        
        printChar('a', false);
        printInt(0, false);
        printFloat(0, false);
        printDouble(0, false);
        return ;
    }
    c = static_cast<char> (parsed_float);
    if (parsed_float >= 0.0 && parsed_float <= 127.0)
        printChar(c, std::isprint(c));
    else
        printChar(c, false);
    i = static_cast<int> (parsed_float);
    if (parsed_float >= std::numeric_limits<int>::min() && parsed_float <= std::numeric_limits<int>::max())
        printInt(i, true);
    else
        printInt(0, false);
    printFloat(parsed_float, true);
    d = static_cast<double> (parsed_float);
    printDouble(d, true);
}