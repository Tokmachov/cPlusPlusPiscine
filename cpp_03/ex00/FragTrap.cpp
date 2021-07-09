/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:48:16 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/01 10:45:27 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"  
#include <iostream>
#include <unistd.h> //for random
#include <sys/time.h> //for random

//Construction values from subject

// • Hit points (100)
// • Max hit points (100)
// • Energy points (100)
// • Max energy points (100)
// • Level (1)
// • Name (Parameter of constructor) 
// • Melee attack damage (30)
// • Ranged attack damage (20)
// • Armor damage reduction (5)

FragTrap::FragTrap(void) : 
	 _name("no name"), _hit_points(100), _max_hit_points(100), 
    _energy_points(100), _max_energy_points(100), _level(1), 
    _melee_attack_damage(30), _ranged_attack_damage(20), 
    _armor_damage_reduction(5) {}

FragTrap::FragTrap(std::string name) : 
	_name(name), _hit_points(100), _max_hit_points(100), 
    _energy_points(100), _max_energy_points(100), _level(1), 
    _melee_attack_damage(30), _ranged_attack_damage(20), 
    _armor_damage_reduction(5) {
		std::cout << "Let me teach you the ways of magic!" << std::endl;
	}

FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
	std::cout << "Let me teach you the ways of magic!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
    this->_max_hit_points = rhs.getMaxHitPoints();
    this->_energy_points = rhs.getEnergyPoints();
    this->_max_energy_points = rhs.getMaxEnergyPoints();
    this->_level = rhs.getLevel();
    this->_melee_attack_damage = rhs.getMeleeAttackDamage();
    this->_ranged_attack_damage = rhs.getRangedAttackDamage();
    this->_armor_damage_reduction = rhs.getArmorDamageReduction();
	return *this;
}

int FragTrap::getHitPoints(void) const {
    return this->_hit_points;
}

int FragTrap::getMaxHitPoints(void) const{
    return this->_max_hit_points;
}

int FragTrap::getEnergyPoints(void) const {
    return this->_energy_points;
}

int FragTrap::getMaxEnergyPoints(void) const {
    return this->_max_energy_points;
}

int FragTrap::getLevel(void) const {
    return this->_level;
}

int FragTrap::getMeleeAttackDamage(void) const {
    return this->_melee_attack_damage;
}

int FragTrap::getRangedAttackDamage(void) const {
    return this->_ranged_attack_damage;
}

int FragTrap::getArmorDamageReduction(void) const {
    return this->_armor_damage_reduction;
}

std::string FragTrap::getName(void) const {
    return this->_name;
}

void FragTrap::rangedAttack(std::string const & target) const {
    _printAttack(target, "ranged", this->getRangedAttackDamage());
}

void FragTrap::meleeAttack(std::string const & target) const {
	_printAttack(target, "melee", this->getMeleeAttackDamage());
}

void FragTrap::takeDamage(unsigned int amount) {
	int hp_before;
	int damage;

	hp_before = this->getHitPoints();
	damage = amount - _armor_damage_reduction;
	damage = damage >= 0 ? damage : 0;
	this->_hit_points -= damage;
	_makeFitIntoLimits(this->_hit_points, this->_max_hit_points);
	_printDamage(damage, hp_before);
}

void FragTrap::beRepaired(unsigned int amount) {
    int hp_before_repair;
    int energy_before_repair;
    
    hp_before_repair = this->_hit_points;
    energy_before_repair = this->_energy_points;
	this->_hit_points += amount;
	this->_energy_points += amount;
	_makeFitIntoLimits(this->_hit_points, this->_max_hit_points);
	_makeFitIntoLimits(this->_energy_points, this->_max_energy_points);
	_printRepair(hp_before_repair, energy_before_repair);
}

static long getUniquieNum(void) {
    struct timeval curr_time;
    usleep(1);
    gettimeofday(&curr_time, NULL);
    return (curr_time.tv_usec);
}

static void getRandomAttack(std::string &attack, int &damage) {
    std::string attacks[] = {
		"psychotic bastard", "sleepy", 
		"dead parrot", "the Funniest Joke in the World",
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
	
	if (this->_energy_points - 25 < 0)
	{
		std::cout << "I am out of energy" << std::endl;
		return ;
	}
	this->_energy_points -= 25;
	_makeFitIntoLimits(this->_energy_points, this->_max_energy_points);
	getRandomAttack(attack, damage);
	_printAttack(target, attack,damage);
}

void FragTrap::_makeFitIntoLimits(int &hp_or_energy, int upper_bound) const {
	hp_or_energy = hp_or_energy > upper_bound ? upper_bound : hp_or_energy;
	hp_or_energy = hp_or_energy < 0 ? 0 : hp_or_energy;
}

void FragTrap::_printAttack(const std::string &t_n, std::string type, int dmg) const {
	std::cout << "Hocus pocus!" << std::endl;
	std::cout << "FR4G-TP \"";
	std::cout << this->getName();
	std::cout << "\" attacked target ";
    std::cout << "FR4G-TP \"";
    std::cout << t_n;
    std::cout << "\" with ";
    std::cout << "\"";
    std::cout << type;
    std::cout << "\"";
    std::cout << " attack, causing damage ";
    std::cout << dmg;
    std::cout << " HP" << std::endl;
}

void FragTrap::_printDamage(int damage, int hp_before) const {
	
	std::cout << "Shouldn't you be murdering something about now?" << std::endl;
	std::cout << "FR4G-TP \"";
    std::cout << this->getName();
	std::cout << "\" received ";
    std::cout << damage;
    std::cout << " HP ";
    std::cout << "of damage" << std::endl;
	std::cout << "HP dropped from ";
	std::cout << hp_before;
	std::cout << " to ";
	std::cout << this->getHitPoints() << std::endl;
}

void FragTrap::_printRepair(int hp_before, int e_before) const {
	std::cout << "No way! That's, like, my third favorite kind of magic!" << std::endl;
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " repaired HP ";
	std::cout << "from ";
	std::cout << hp_before;
	std::cout << " HP";
	std::cout << " to ";	
	std::cout << this->_hit_points << std::endl;	
	std::cout << "FR4G-TP repaired energy ";
	std::cout << "from ";
	std::cout << e_before;
	std::cout << " to ";
	std::cout << this->_energy_points;
	std::cout << " HP" << std::endl;
}



