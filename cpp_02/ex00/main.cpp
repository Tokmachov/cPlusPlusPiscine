/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:09:26 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/01 10:29:14 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << "-------------Getters setters tests-------------" << std::endl;
    a.setRawBits(10);
    std::cout << a.getRawBits() << std::endl;
    return 0;
}
//output
// Default constructor called
// Copy constructor called
// Assignation operator called // <-- This line may be missing depending on your implementation
// getRawBits member function called
// Default constructor called
// Assignation operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called