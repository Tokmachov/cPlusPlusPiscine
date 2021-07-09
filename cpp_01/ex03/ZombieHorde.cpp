/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:53:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/31 11:21:08 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.hpp"
#include <time.h> //time
#include <stdlib.h> //rand srand func
#include <unistd.h> //sleep
#include <sys/time.h> //getUniqueNum

ZombieHorde::ZombieHorde(void) {}

ZombieHorde::ZombieHorde(int n) : _z_count(n) {
    if (_z_count <= 0) {
        this->_zombies = 0;
        return ;
    }
    this->_zombies = new Zombie[_z_count];
    _setZombiesParameters(n);
    this->announce();
}

ZombieHorde::~ZombieHorde(void) {
    delete [] _zombies;
}

void ZombieHorde::announce(void) const {
    if (_z_count <= 0 || _zombies == 0)
        return ;
    for (int i = 0; i < this->_z_count; i++)
        _zombies[i].announce();
}

void ZombieHorde::_setZombiesParameters(int z_count) {
    int i = 0;
    while(i < z_count) {
        _zombies[i].setName(_getRandomZombieName());
        _zombies[i].setType("Blue Walker");
        i++;
    }
}

std::string ZombieHorde::_getRandomZombieName(void) const {
    std::string z_names[] = { "Rottie", "Ludy", "Bloater", "Muncher", "Urgh" };
    int z_names_count = 5;
    srand(_getUniquieNum());
    return (z_names[rand() % z_names_count]);
}

long ZombieHorde::_getUniquieNum(void) const {
    struct timeval curr_time;
    usleep(1);
    gettimeofday(&curr_time, NULL);
    return (curr_time.tv_usec);
}
