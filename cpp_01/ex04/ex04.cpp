/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:18:38 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 17:18:40 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;
	std::cout << "Display string using pointer:" << std::endl;
	std::cout << *str_ptr << std::endl;
	std::cout << "Display string using ref:" << std::endl;
	std::cout << str_ref << std::endl;
	return 0;
}
