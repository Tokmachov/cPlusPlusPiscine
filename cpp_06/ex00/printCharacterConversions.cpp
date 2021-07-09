/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printCharacterConversions.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:09:23 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 17:26:33 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "convertion.hpp"

void printCharacterConversions(std::string str)
{
    unsigned char literal = str[0];
    int i = static_cast<int> (literal);
    float f = static_cast<float> (literal);
    double d = static_cast<double> (literal);
    
    printChar(literal, std::isprint(literal));
    printInt(i, true);
    printFloat(f, true);
    printDouble(d, true);
}