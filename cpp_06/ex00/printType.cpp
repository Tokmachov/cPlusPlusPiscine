/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeConvertionFunc.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:27:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 17:09:44 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertion.hpp"
#include <sstream>
#include <iostream>
#include <iomanip>

void printChar(char literal, bool is_printable)
{
    std::cout << "char: ";
    
    if (is_printable)
        std::cout << literal << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void printInt(int i, bool is_possible_to_print)
{
    std::cout << "int: ";
    if (is_possible_to_print)
        std::cout << i << std::endl;
    else
    {
        (void)i;
        std::cout << "impossible" << std::endl;
    }   
}

void printFloat(float f, bool is_possible_to_print)
{
    std::cout << "float: ";
    if (is_possible_to_print)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << f << 'f' << std::endl;
    }
    else
    {
        (void)f;
        std::cout << "impossible" << std::endl;
    }
}

void printDouble(double d, bool is_possible_to_print)
{
    std::cout << "double: ";
    if (is_possible_to_print)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(1);
        std::cout << d << std::endl;   
    }
    else
    {
        (void)d;
        std::cout << "impossible" << std::endl;
    }
}





