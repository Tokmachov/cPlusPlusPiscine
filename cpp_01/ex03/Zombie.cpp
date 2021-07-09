/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:07:46 by mac               #+#    #+#             */
/*   Updated: 2021/01/18 19:07:47 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _name(name), _type(type) {}
Zombie::Zombie(void) : _name(""), _type("") {}
Zombie::~Zombie(void) {}

void Zombie::announce(void) const {
	std::cout << "Z name: \"" << this->_name << "\" of type: \"" << this->_type;
	std::cout << "\": Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

void Zombie::setType(std::string type) {
	this->_type = type;
}
