/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:03:43 by mac               #+#    #+#             */
/*   Updated: 2021/01/18 17:03:45 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony(std::string nm) : _nickname(nm), _sound("neigh!") {
    std::cout << "Pony \"" << this->_nickname << "\""; 
    std::cout << "is born" << std::endl;
}

Pony::~Pony(void) {
    std::cout << "Pony walked across the horizon" << std::endl;
}

void Pony::walk(std::string place) const {
	std::cout << "Pony walks lively over a fragrant ";
	std::cout << place << std::endl;
}
void Pony::run(std::string place) const {
	std::cout << "Pony runs lively over a fragrant ";
	std::cout << place << std::endl;
}

void Pony::makeSound(void) const {
	std::cout << this->_sound << std::endl;
}