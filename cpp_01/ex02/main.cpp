/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:08:43 by mac               #+#    #+#             */
/*   Updated: 2021/01/31 11:09:23 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <unistd.h>

int main(void)
{   
    
	std::cout << "Create zombie with Zombie class constructor" << std::endl;    
    Zombie z_1("Friendly Zombie", "Stinky");
    z_1.announce();
    
	std::cout << "Create zombies with ZombieEvent class" << std::endl;
	ZombieEvent z_event;
    std::cout << "Create zombie with no type" << std::endl;
	Zombie *z_2 = z_event.newZombie("Stinky");
	z_2->announce();
	delete z_2;

	std::cout << "Create zombie with type set" << std::endl;	
	z_event.setZombieType("Friendly Zombie");
	Zombie *z_3 = z_event.newZombie("Chompchamp");
	z_3->announce();
	delete z_3;
	
	std::cout << "Create randomly named zombies with type set" << std::endl;	
	z_event.setZombieType("Busted Zombie");
	Zombie *z_4 = z_event.randomChump();
	delete z_4;

	std::cout << "Create randomly named zombies with type set" << std::endl;	
	z_event.setZombieType("Busted Zombie");
	Zombie *z_5 = z_event.randomChump();
	delete z_5;

	std::cout << "Create randomly named zombies with type set" << std::endl;	
	z_event.setZombieType("Busted Zombie");
	Zombie *z_6 = z_event.randomChump();
	delete z_6;

	//sleep(100);	
	return 0;
}