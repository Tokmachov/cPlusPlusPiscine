/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printDoubleConvertions.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:41:32 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 18:34:55 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <limits> // for numeric limits
#include <errno.h> // for out of range checks when parsing float
#include "convertion.hpp"
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

void printDoubleConvertions(std::string s)
{
    char c;
    int i;
    float f;
    double parsed_double;
    
    parsed_double = strtod(s.c_str(), NULL);
    c = static_cast<char> (parsed_double);
    i = static_cast<int> (parsed_double);
    f = static_cast<float> (parsed_double);
    if (errno == ERANGE)
    {   
        printChar(c, false);
        printInt(i, false);
        printFloat(0, false);
        printDouble(parsed_double, false);
        return ;
    }
    if (parsed_double >= 0.0 && parsed_double <= 127.0)
        printChar(c, std::isprint(c));
    else
        printChar(c, false);
    if (parsed_double >= std::numeric_limits<int>::min() && parsed_double <= std::numeric_limits<int>::max())
        printInt(i, true);
    else
        printInt(i, false);
    errno = 0;
    strtof(s.c_str(), NULL);
    if (errno != ERANGE)
    
        printFloat(f, true);
    else
        printFloat(f, false);
    printDouble(parsed_double, true);
}