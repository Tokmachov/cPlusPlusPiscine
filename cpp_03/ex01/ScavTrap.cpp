/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:52:43 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/01 12:44:06 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"  
#include <iostream>
#include <unistd.h>
#include <sys/time.h>

// • Hit points (100)
// • Max hit points (100)
// • Energy points (50)
// • Max energy points (50)
// • Level (1)
// • Name (Parameter of constructor) 
// • Melee attack damage (20)
// • Ranged attack damage (15)
// • Armor damage reduction (3)

ScavTrap::ScavTrap(std::string name) :
    _name(name), _hit_points(100), _max_hit_points(100), _energy_points(50),
    _max_energy_points(50), _level(1), _melee_attack_damage(20),
    _ranged_attack_damage(15), _armor_damage_reduction(3) {
    std::cout << "ScavTrap constructor is called" << std::endl;
	
	    return ;
}
ScavTrap::ScavTrap(void) :
	_name("no name"), _hit_points(100), _max_hit_points(100), _energy_points(50),
	_max_energy_points(50), _level(1), _melee_attack_damage(20),
	_ranged_attack_damage(15), _armor_damage_reduction(3) {
    std::cout << "ScavTrap constructor is called" << std::endl;
	    return ;
}
ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	this->_name = rhs.getName();
	this->_hit_points = rhs.getHitPoints();
	this->_max_hit_points = rhs.getMaxPoints();
	this->_energy_points = rhs.getEnergyPoints();
	this->_max_energy_points = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_melee_attack_damage = rhs.getMeleeAttackDamage();
	this->_ranged_attack_damage = rhs.getRangedAttackDamage();
	this->_armor_damage_reduction = rhs.getArmorDamageReduction();
	return *this;
}

std::string ScavTrap::getName(void) const {
	return this->_name;
}
int ScavTrap::getHitPoints(void) const {
	return this->_hit_points;
}
int ScavTrap::getMaxPoints(void) const {
	return this->_max_hit_points;
}
int ScavTrap::getEnergyPoints(void) const {
	return this->_max_energy_points;
}
int ScavTrap::getMaxEnergyPoints(void) const {
	return this->_max_energy_points;
}
int ScavTrap::getLevel(void) const {
	return this->_level;
}
int ScavTrap::getMeleeAttackDamage(void) const {
	return this->_melee_attack_damage;
}
int ScavTrap::getRangedAttackDamage(void) const {
	return this->_ranged_attack_damage;
}
int ScavTrap::getArmorDamageReduction(void) const {
	return this->_armor_damage_reduction;
}

void ScavTrap::rangedAttack(std::string const & target) const {
    _printAttack(target, "ranged", this->getRangedAttackDamage());
}

void ScavTrap::meleeAttack(std::string const & target) const {
	_printAttack(target, "melee", this->getMeleeAttackDamage());
}

void ScavTrap::takeDamage(unsigned int amount) {
	int hp_before;
	int damage;

	hp_before = this->getHitPoints();
	damage = amount - _armor_damage_reduction;
	damage = damage >= 0 ? damage : 0;
	this->_hit_points -= damage;
	_makeFitIntoLimits(this->_hit_points, this->_max_hit_points);
	_printDamage(damage, hp_before);
}

void ScavTrap::beRepaired(unsigned int amount) {
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

static std::string getRandomStr(std::string arr[], int el_count) {
	int index;
	
	srand(getUniquieNum());
    index = rand() % el_count;
	return arr[index];
}

void ScavTrap::challengeNewcomer(void) {
	std::string challanges[] = {"\"Eat frog\"", "\"First asleep\"", 
	"\"Eat uncooked patato\"", "\"code your shell\"", "\"Get me some cofee\""
	};
	if (this->_energy_points - 25 < 0)
	{
		std::cout << "I am out of energy!" << std::endl;
		return ;
	}
	this->_energy_points -= 25;
	std::string challange = getRandomStr(challanges, 5);
	std::cout << "Hey newcomer!" << std::endl;
	std::cout << "I offer you a " << challange << " challenge." << std::endl;
}

void ScavTrap::_makeFitIntoLimits(int &hp_or_energy, int upper_bound) const {
	hp_or_energy = hp_or_energy > upper_bound ? upper_bound : hp_or_energy;
	hp_or_energy = hp_or_energy < 0 ? 0 : hp_or_energy;
}

void ScavTrap::_printAttack(const std::string &t_n, std::string type, int dmg) const {
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

void ScavTrap::_printDamage(int damage, int hp_before) const {
	
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

void ScavTrap::_printRepair(int hp_before, int e_before) const {
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

