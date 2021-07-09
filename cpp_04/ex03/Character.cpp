/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:47:47 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 12:17:51 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string name) : _name(name)
{
	_set_all_materias_to_null();
}

Character::Character() : _name("default name")
{
	std::cout << "Default" << std::endl;
	_set_all_materias_to_null();
}

Character::Character( const Character & src )
{
	_deep_cpy_mat_storage(src._storage, _storage);
	_name = src._name;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	_delete_storage();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		_delete_storage();
		_deep_cpy_mat_storage(rhs._storage, _storage);		
		_name = rhs._name;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "Character: " << i.getName() << std::endl;
	o << "Materia list:" << std::endl;
	for (int index = 0; index < STORAGE_CAPACITY; index++)
	{
		o << index << " Adress: " << i.getMateria(index) << std::endl;
		if (i.getMateria(index) != 0)
			o << *(i.getMateria(index)) << std::endl;
		else
			o << "no materia is equiped" << std::endl;
	}
	return o; 
}

/*
** --------------------------------- PUBLIC_METHODS ----------------------------
*/

void Character::equip(AMateria* m)
{
	int index = _vacant_storage_index();
	if (index == NO_VACANT_INDEX)
		return ;
	_storage[index] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < STORAGE_CAPACITY && _storage[idx])
		_storage[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < STORAGE_CAPACITY && _storage[idx] != 0)
	{
		_storage[idx]->use(target);		
	}
}

/*
** --------------------------------- PRIVATE_METHODS ---------------------------
*/

void Character::_set_all_materias_to_null()
{
	for (int i = 0; i < STORAGE_CAPACITY; i++)
		_storage[i] = 0;
}

void Character::_deep_cpy_mat_storage(AMateria* const *src, AMateria **dst)
{
	for (int i = 0; i < STORAGE_CAPACITY; i++)
	{
		if (src[i] != 0)
			dst[i] = src[i]->clone();
		else
			dst[i] = 0;
	}	
}

void Character::_delete_storage()
{
	for (int i = 0; i < STORAGE_CAPACITY; i++)
		delete _storage[i];
}

int Character::_vacant_storage_index() const
{
	for (int index = 0; index < STORAGE_CAPACITY; index++)
	{
		if (_storage[index] == 0)
			return index;
	}
	return NO_VACANT_INDEX;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return _name;
}

const AMateria *Character::getMateria(int index) const
{
	return _storage[index];	
}

/* ************************************************************************** */