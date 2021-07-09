/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:50:18 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 19:36:50 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//’c’, ’a’
#include <iostream>
#include "convertion.hpp"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

//#include <limits> //int max min
// std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << '\n';
// std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << '\n';
// std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << '\n';
// std::cout << "Maximum value for float: " << std::numeric_limits<float>::max() << '\n';
#include <float.h>

#include <inttypes.h>
#include <errno.h>
#include <stdio.h>
#include <limits.h>
#include "float.h"

int main(int ac, char **av)
{
    int arg_type;

    if (ac != 2)
    {
        std::cout << "Error: only 1 argument is expected" << std::endl;
        return 0;
    }
    arg_type = getType(av[1]);
    if (arg_type == CHAR_STR)
        printCharacterConversions(av[1]);
    else if (arg_type == INT_STR)
        printIntConvertions(av[1]);
    else if (arg_type == FLOAT_STR)
        printFloatConvertions(av[1]);
    else if (arg_type == DOUBLE_STR)
        printDoubleConvertions(av[1]);
    else
        std::cout << "Error type" << std::endl;
    return 0;
}
