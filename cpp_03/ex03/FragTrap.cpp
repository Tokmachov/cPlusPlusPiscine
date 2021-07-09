/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:38:34 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 16:52:28 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"  
#include <unistd.h>
#include <sys/time.h>
#include <iostream>

FragTrap::FragTrap(std::string name): 
	ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
	std::cout << "FragTrap constructor is called" << std::endl;
}

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor is called" << std::endl;
	
}

FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
	std::cout << "FragTrap copy constructor is called" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor is called" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target) const {
    std::cout << "Viva Cristo Rey y Santa Maria de Guadalupe!" << std::endl;
	std::cout << "FRAGTRAP \"";
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

void FragTrap::meleeAttack(std::string const & target) const {
	std::cout << "Viva Cristo Rey y Santa Maria de Guadalupe!" << std::endl;
	std::cout << "FRAGTRAP \"";
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

void FragTrap::takeDamage(unsigned int amount) {
	int hp_before;
	int damage;

	hp_before = getHitPoints();
	damage = amount - getArmorDamageReduction();
	damage = damage >= 0 ? damage : 0;
	setHitPoints(getHitPoints() - damage);
	if (getHitPoints() < 0)
		setHitPoints(0);
	std::cout << "Nononono, no, no! 'E's resting!" << std::endl;
	std::cout << "FRAGTRAP \"";
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

void FragTrap::beRepaired(unsigned int amount) {
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
	std::cout << "Heal me!";
    std::cout << "FRAGTRAP " << getName();
	std::cout << " repaired HP ";
	std::cout << "from ";
	std::cout << hp_before_repair;
	std::cout << " HP";
	std::cout << " to ";	
	std::cout << getHitPoints() << std::endl;	
	std::cout << "FRAGTRAP repaired energy ";
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

static void getRandomAttack(std::string &attack, int &damage) {
    std::string attacks[] = {
		"psychotic bastard", 
		"sleepy", 
		"dead parrot", 
		"the Funniest Joke in the World",
		"shy and timid"
		};
    int damages[] = { 30, 1, 10, 100, 5 };
	int attacks_count = 5;
    int index;
	srand(getUniquieNum());
    index = rand() % attacks_count;
	attack = attacks[index];
	damage = damages[index];
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string	attack;
	int damage;
	
	if (getEnergyPoints() < 25)
	{
		std::cout << "I am out of energy" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	getRandomAttack(attack, damage);
	std::cout << "vaulthunter_dot_exe!" << std::endl;
	std::cout << "FR4G-TP \"";
	std::cout << getName();
	std::cout << "\" attacked target ";
    std::cout << target;
    std::cout << "\" with ";
    std::cout << "\"";
    std::cout << attack;
    std::cout << "\"";
    std::cout << " attack, causing damage ";
    std::cout << damage;
    std::cout << " HP" << std::endl;
}
