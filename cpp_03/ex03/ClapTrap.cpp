/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:25:23 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 15:14:07 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"  
#include <iostream>	

ClapTrap::ClapTrap(std::string name) :
    _name(name), 
    _hit_points(0), 
    _max_hit_points(0),
    _max_energy_points(0), 
    _level(0),
    _melee_attack_damage(0), 
    _ranged_attack_damage(0),
    _armor_damage_reduction(0),
    _energy_points(0) {
    std::cout << "ClapTrap constructor is called" << std::endl;
        return ;
}

ClapTrap::ClapTrap(
		std::string name,
		int hit_points,
		int max_hit_points,
		int energy_points,
		int max_energy_points,
		int level,
		int melee_attack_damage,
		int ranged_attack_damage,
		int armor_damage_reduction
	) :
        _name(name),
	    _hit_points(hit_points),
	    _max_hit_points(max_hit_points),
	    _max_energy_points(max_energy_points),
	    _level(level),
	    _melee_attack_damage(melee_attack_damage),
	    _ranged_attack_damage(ranged_attack_damage),
	    _armor_damage_reduction(armor_damage_reduction),
	    _energy_points(energy_points) {
	std::cout << "ClapTrap name constructor is called" << std::endl;
}

ClapTrap::ClapTrap(void) :
    _name("no name"),
    _hit_points(0),
    _max_hit_points(0),
    _max_energy_points(0),
    _level(0),
    _melee_attack_damage(0),
    _ranged_attack_damage(0),
    _armor_damage_reduction(0), 
    _energy_points(0) {
    std::cout << "ClapTrap default initializer is called" << std::endl;
	    return ;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
	std::cout << "ClapTrap constructor: let me teach you ";
    std::cout << "the ways of magic!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor is called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_max_hit_points = rhs._max_hit_points;
		this->_energy_points = rhs._energy_points;
		this->_max_energy_points = rhs._max_energy_points;
		this->_level = rhs._level;
		this->_melee_attack_damage = rhs._melee_attack_damage;
		this->_ranged_attack_damage = rhs._ranged_attack_damage;
		this->_armor_damage_reduction = rhs._armor_damage_reduction;	
	}
	return *this;
}

//--------------------public methods--------------------------------------------

void ClapTrap::rangedAttack(std::string const & target) const {
    std::cout << "Hocus pocus!" << std::endl;
	std::cout << "FR4G-TP \"";
	std::cout << _name;
	std::cout << "\" attacked target ";
    std::cout << "FR4G-TP \"";
    std::cout << target;
    std::cout << "\" with ";
    std::cout << "\"";
    std::cout << "ranged";
    std::cout << "\"";
    std::cout << " attack, causing damage ";
    std::cout << _ranged_attack_damage;
    std::cout << " HP" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << "Hocus pocus!" << std::endl;
	std::cout << "FR4G-TP \"";
	std::cout << _name;
	std::cout << "\" attacked target ";
    std::cout << "FR4G-TP \"";
    std::cout << target;
    std::cout << "\" with ";
    std::cout << "\"";
    std::cout << "melee";
    std::cout << "\"";
    std::cout << " attack, causing damage ";
    std::cout << _melee_attack_damage;
    std::cout << " HP" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	int hp_before;
	int damage;

	hp_before = _hit_points;
	damage = amount - _armor_damage_reduction;
	damage = damage >= 0 ? damage : 0;
	_hit_points -= damage;
	_hit_points = _hit_points >= 0 ? _hit_points : 0;
	std::cout << "Shouldn't you be murdering something about now?" << std::endl;
	std::cout << "FR4G-TP \"";
    std::cout << _name;
	std::cout << "\" received ";
    std::cout << damage;
    std::cout << " HP ";
    std::cout << "of damage" << std::endl;
	std::cout << "HP dropped from ";
	std::cout << hp_before;
	std::cout << " to ";
	std::cout << _hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    int hp_before_repair;
    int energy_before_repair;
    
    hp_before_repair = _hit_points;
    energy_before_repair = _energy_points;
	_hit_points += amount;
	_energy_points += amount;
	_hit_points = _hit_points <= _max_hit_points ? _hit_points : _max_hit_points;
	_energy_points = _energy_points <= _max_energy_points ? _energy_points : _max_energy_points;
	std::cout << "No way! That's, like, ";
	std::cout << "my third favorite kind of magic!" << std::endl;
    std::cout << "FR4G-TP " << _name;
	std::cout << " repaired HP ";
	std::cout << "from ";
	std::cout << hp_before_repair;
	std::cout << " HP";
	std::cout << " to ";	
	std::cout << _hit_points << std::endl;	
	std::cout << "FR4G-TP repaired energy ";
	std::cout << "from ";
	std::cout << energy_before_repair;
	std::cout << " to ";
	std::cout << _energy_points;
	std::cout << " HP" << std::endl;
}

//----------------------Getters-------------------------------------------------

std::string ClapTrap::getName(void) const {
	return _name;
}

int ClapTrap::getMeleeAttackDamage(void) const {
	return _melee_attack_damage;
}

int ClapTrap::getHitPoints(void) const {
	return _hit_points;
}

int ClapTrap::getEnergyPoints(void) const {
	return _energy_points;
}

int ClapTrap::getRangedAttackDamage(void) const {
	return _ranged_attack_damage;
}

int ClapTrap::getMaxEnergyPoints(void) const {
	return _max_energy_points;
}

int ClapTrap::getMaxHitPoints(void) const {
	return _max_hit_points;
}

int ClapTrap::getArmorDamageReduction(void) const {
	return _armor_damage_reduction;
}

//----------------------Setters-------------------------------------------------

void ClapTrap::setHitPoints(int hit_points) {
	_hit_points = hit_points;
}
void ClapTrap::setEnergyPoints(int energy_points) {
	_energy_points = energy_points;
}