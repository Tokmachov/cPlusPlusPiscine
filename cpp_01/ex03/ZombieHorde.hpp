/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:53:29 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/31 11:18:19 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {

public:
    ZombieHorde(void);
	ZombieHorde(int n);
    ~ZombieHorde(void);
    
    void announce(void) const;

private:
    Zombie	*_zombies;
    int _z_count;
    
    void _setZombiesParameters(int z_count);
    std::string _getRandomZombieName(void) const;
    long _getUniquieNum(void) const;
};

#endif
