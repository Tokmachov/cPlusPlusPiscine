/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:48:04 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 17:18:09 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap(std::string name): 
	ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "NinjaTrap constructor is called" << std::endl;
}

NinjaTrap::NinjaTrap(void) : ClapTrap() {
	std::cout << "NinjaTrap default is called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & src) {
	*this = src;
	std::cout << "NinjaTrap copy is called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap distructor is called" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void NinjaTrap::rangedAttack(std::string const & target) const {
	std::cout << "Nobiscum Deus!" << std::endl;
	std::cout << "NINJATRAP \"";
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

void NinjaTrap::meleeAttack(std::string const & target) const {
	std::cout << "Nobiscum Deus!" << std::endl;
	std::cout << "NINJATRAP \"";
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

void NinjaTrap::takeDamage(unsigned int amount) {
	int hp_before;
	int damage;

	hp_before = getHitPoints();
	damage = amount - getArmorDamageReduction();
	damage = damage >= 0 ? damage : 0;
	setHitPoints(getHitPoints() - damage);
	if (getHitPoints() < 0)
		setHitPoints(0);
	std::cout << "I never, never did anything..." << std::endl;
	std::cout << "NINJATRAP \"";
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

void NinjaTrap::beRepaired(unsigned int amount) {
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
	std::cout << "I'm bleeding!";
    std::cout << "NINJATRAP " << getName();
	std::cout << " repaired HP ";
	std::cout << "from ";
	std::cout << hp_before_repair;
	std::cout << " HP";
	std::cout << " to ";	
	std::cout << getHitPoints() << std::endl;	
	std::cout << "NINJATRAP repaired energy ";
	std::cout << "from ";
	std::cout << energy_before_repair;
	std::cout << " to ";
	std::cout << getEnergyPoints();
	std::cout << " HP" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap) {
	
	if (getEnergyPoints() < 25)
	{
		std::cout << "I am out of energy" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::cout << "NinjaShoebox attacked ";
	std::cout << "with Fragtrap attack and a shrimp" << std::endl;
	trap.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap) {
	if (getEnergyPoints() < 25)
	{
		std::cout << "I am out of energy" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::cout << "NinjaShoebox attacked ";
	std::cout << "with NinjaTrap attack and became perplexed" << std::endl;
	trap.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap) {
	if (getEnergyPoints() < 25)
	{
		std::cout << "I am out of energy" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::cout << "NinjaShoebox attacked with ClapTrap attack ";
	std::cout << "and became and amused everyone around" << std::endl;
	trap.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap) {
	if (getEnergyPoints() < 25)
	{
		std::cout << "I am out of energy" << std::endl;
		return ;
	}
	setEnergyPoints(getEnergyPoints() - 25);
	std::cout << "NinjaShoebox attacked with ClapTrap attack ";
	std::cout << "and became and amused everyone around" << std::endl;
	trap.takeDamage(10);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */