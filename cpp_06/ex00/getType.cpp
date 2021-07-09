/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:02:22 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 19:52:40 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "convertion.hpp"

static int countChars(char c, std::string s)
{
    int count = 0;
    for (size_t i = 0; (i = s.find(c, i)) != std::string::npos; i++) {
        count++;
    }
    return count;
}

static bool isDouble(std::string s)
{
    if (s.compare("-inf") == 0)
        return true;
    if (s.compare("+inf") == 0)
        return true;
    if (s.compare("nan") == 0)
        return true;
    if (s.find_first_not_of("+-0123456789.") != std::string::npos)
        return false;
    if ((countChars('.', s)) != 1)
        return false;
    return true;
}

static bool isFloat(std::string s)
{   
    if (s.compare("-inff") == 0)
        return true;
    if (s.compare("+inff") == 0)
        return true;
    if (s.compare("nanf") == 0)
        return true;
    if (s.find_first_not_of("+-0123456789.f") != std::string::npos)
        return false;
    if ((countChars('.', s)) != 1 || (countChars('f', s) != 1))
        return false;
    if (s[s.length() - 1] != 'f')
        return false;
    return true;
}

static bool isInt(std::string s)
{
    if (s.empty() == true)
        return false;
    if (s.find_first_not_of("+-0123456789") != std::string::npos)
        return false;
    if (s.find('+', 1) != std::string::npos)
        return false;
    if (s.find('-', 1) != std::string::npos)
        return false;
    return true;
}

static bool isChar(std::string str)
{
    if (str.length() == 1 && std::isdigit(str[0]) == 0)
        return true;
    return false;
}

char getType(std::string str)
{
    if (isChar(str))
        return CHAR_STR;
    else if (isInt(str))
        return INT_STR;
    else if (isFloat(str))
        return FLOAT_STR;
    else if (isDouble(str))
        return DOUBLE_STR;
    return ERROR_STR;
}