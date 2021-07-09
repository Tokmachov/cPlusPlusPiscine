/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:08:24 by mac               #+#    #+#             */
/*   Updated: 2021/01/31 11:07:02 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

#include <stdlib.h> // srand, rand
#include <time.h> //time
#include <unistd.h> //sleep

ZombieEvent::ZombieEvent(void) : _z_type("Unset") {}

ZombieEvent::~ZombieEvent(void) {}

void		ZombieEvent::setZombieType(std::string type) {
    this->_z_type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name) {
	return new Zombie(this->_z_type, name);
}

Zombie		*ZombieEvent::randomChump(void) {
	std::string	name;
	name = _getRandomName();
	Zombie *new_zombie = new Zombie(_z_type, name);
	new_zombie->announce();
	return new_zombie;
}

std::string	ZombieEvent::_getRandomName(void) {
	std::string z_names[] = {"Rottie", "Ludy", "Bloater", "Muncher", "Urgh"};
	int			z_names_count = 5;
	sleep(1);
	srand(time(0));
	return z_names[rand() % z_names_count];
}
