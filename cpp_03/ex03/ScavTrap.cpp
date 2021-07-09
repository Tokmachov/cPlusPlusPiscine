/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:38:53 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 15:41:35 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"  
#include <unistd.h>
#include <sys/time.h>
#include <iostream>

ScavTrap::ScavTrap(std::string name): 
	ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3) {
	std::cout << "ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor is called" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
	std::cout << "ScavTrap copy constructor is called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor is called" << std::endl;
}

//-------------------------public methods---------------------------------------

void ScavTrap::rangedAttack(std::string const & target) const {
	std::cout << "Geronimo!!!!" << std::endl;
	std::cout << "SCAVTRAP \"";
	std::cout << getName();
	std::cout << "\" attacked target ";
    std::cout << target;
    std::cout << "\" with ";
    std::cout << "\"";
    std::cout << "ranged";
    std::cout << "\"";
    std::cout << " attack, causing damage ";
    std::cout << getRangedAttackDamage();
    std::cout << " HP" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const {
	std::cout << "Geronimo!!!!" << std::endl;
	std::cout << "SCAVTRAP \"";
	std::cout << getName();
	std::cout << "\" attacked target ";
    std::cout << target;
    std::cout << "\" with ";
    std::cout << "\"";
    std::cout << "melee";
    std::cout << "\"";
    std::cout << " attack, causing damage ";
    std::cout << getMeleeAttackDamage();
    std::cout << " HP" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount) {
	int hp_before;
	int damage;

	hp_before = getHitPoints();
	damage = amount - getArmorDamageReduction();
	damage = damage >= 0 ? damage : 0;
	setHitPoints(getHitPoints() - damage);
	if (getHitPoints() < 0)
		setHitPoints(0);
	std::cout << "Now that's what I call a dead parrot." << std::endl;
	std::cout << "SCAVTRAP \"";
    std::cout << getName();
	std::cout << "\" received ";
    std::cout << damage;
    std::cout << " HP ";
    std::cout << "of damage" << std::endl;
	std::cout << "HP dropped from ";
	std::cout << hp_before;
	std::cout << " to ";
	std::cout << getHitPoints() << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	int hp_before_repair;
    int energy_before_repair;
    
    hp_before_repair = getHitPoints();
    energy_before_repair = getEnergyPoints();
	setHitPoints(getHitPoints() + amount);
	if (getHitPoints() > getMaxHitPoints())
		setHitPoints(getMaxHitPoints());
	setEnergyPoints(getEnergyPoints() + amount);
	if (getEnergyPoints() > getMaxEnergyPoints())
		setEnergyPoints(getMaxEnergyPoints());
	std::cout << "Medic! Medic! ";
    std::cout << "SCAVTRAP " << getName();
	std::cout << " repaired HP ";
	std::cout << "from ";
	std::cout << hp_before_repair;
	std::cout << " HP";
	std::cout << " to ";	
	std::cout << getHitPoints() << std::endl;	
	std::cout << "SCAVTRAP repaired energy ";
	std::cout << "from ";
	std::cout << energy_before_repair;
	std::cout << " to ";
	std::cout << getEnergyPoints();
	std::cout << " HP" << std::endl;	
}

static long getUniquieNum(void) {
    struct timeval curr_time;
    usleep(1);
    gettimeofday(&curr_time, NULL);
    return (curr_time.tv_usec);
}

static std::string getRandomStr(std::string arr[], int el_count) {
	int index;
	
	srand(getUniquieNum());
    index = rand() % el_count;
	return arr[index];
}

void ScavTrap::challengeNewcomer(void) {
	std::string challanges[] = {
		"\"Eat frog\"", 
		"\"First asleep\"", 
		"\"Eat uncooked patato\"", 
		"\"code your shell\"", 
		"\"Get me some coffee\""
	};

	if (getEnergyPoints() < 25)
	{
		std::cout << "I am out of energy" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::string challenge = getRandomStr(challanges, 5);
	std::cout << "Hey newcomer!" << std::endl;
	std::cout << "I offer you a " << challenge << " challenge." << std::endl;
}
