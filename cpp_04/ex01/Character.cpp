/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:47:17 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/04 12:54:43 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const & name,  const AWeapon & w)
	: _name(name), _ap_num(40), _ap_max(40), _weapon(&w)
{
}
Character::Character(std::string const & name)
	: _name(name), _ap_num(40), _ap_max(40), _weapon(0)
{
}
Character::Character()
	: _name("no name"), _ap_num(0), _weapon(0)
{
}

Character::Character( const Character & src )
{
	this->_name = src._name;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs.getName();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if (i.getWeapon() != 0)
	{
		o << i.getName() << " has " << i.getApNum() << " AP and wields a ";
		o << i.getWeapon()->getName();	
	}
	else
		o << i.getName() << " has " << i.getApNum() << " AP and is unarmed";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// Posesses 40 AP at creation, 
// loses the AP corresponding to the weapon 
// he has on each use, and recovers 10 AP 
// upon each call to recoverAP() , up 
// to a maximum of 40. No AP, no attack.

void Character::recoverAP() {
	_ap_num += 10;
	if (_ap_num > _ap_max)
		_ap_num = 40;
}

void Character::equip(AWeapon* w) {
	_weapon = w;
}

void Character::attack(Enemy *enemy) {
	if (!_weapon)
	{
		std::cout << "Character: Where is my weapon? See you this time tomorrow!." << std::endl;
		return ;
	}
	if (_ap_num < _weapon->getAPCost())
	{
		std::cout << "Character: not enough AP" << std::endl;
		return ;
	}
	_ap_num -= _weapon->getAPCost();
	std::cout << getName() << " attacks " << enemy->getType();
	std::cout << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
}

bool Enemy::isDead() const {
	return (_hp <= 0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Character::getName() const {
	return _name;
}

int Character::getApNum() const {
	return _ap_num;
}

const AWeapon *Character::getWeapon() const {
	return _weapon;
}

/* ************************************************************************** */