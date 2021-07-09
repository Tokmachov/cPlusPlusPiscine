/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printIntConvertions.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:09:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 18:45:19 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "convertion.hpp"

void printIntConvertions(std::string str)
{
    bool is_overflow;
    char c;
    int i = atoi_overflow(str, &is_overflow);
    float f;
    double d;
    if (is_overflow)
    {
        printChar('a', false);
        printInt(0, false);
        printFloat(0, false);
        printDouble(0, false);
        return ;
    }    
    c = static_cast<char> (i);
    f = static_cast<float> (i);
    d = static_cast<double> (i);
    if (i >= 0 && i <= 127)
        printChar(c, std::isprint(c));
    else
        printChar(c, false);
    printInt(i, true);
    printFloat(f, true);
    printDouble(d, true);
}