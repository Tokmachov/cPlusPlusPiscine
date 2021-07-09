/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:18:30 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 16:52:15 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() 
	: ISquad(), _unit_count(0),  _capacity(2)
{
	_storage = new ISpaceMarine*[_capacity];
}

Squad::Squad( const Squad & src )
{
	_unit_count = src._unit_count;
	_storage = new ISpaceMarine*[src._capacity];
	_deep_copy_storage(src._storage, _storage, src._unit_count);
	_capacity = src._capacity;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	_deleteStorage();
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=( Squad const & rhs )
{
	if ( this != &rhs )
	{
		_unit_count = rhs._unit_count;
		_deleteStorage();
		_storage = new ISpaceMarine*[rhs._capacity];
		_deep_copy_storage(rhs._storage, _storage, rhs._unit_count);
		_capacity = rhs._capacity;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Squad const & i )
{
	o << "Addresses kept in squad's storage" << std::endl;
	for (int index = 0; index < i.getCount(); index++)
		o << "Adress = " << i.getUnit(index) << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount() const 
{
	return _unit_count;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	if (index < 0 || index >= _unit_count)
		return 0;
	return _storage[index];
}

int Squad::push(ISpaceMarine* unit)
{
	if (_isAlreadyAdded(unit) || unit == 0)
		return _unit_count;
	if (_unit_count == _capacity)
	{
		ISpaceMarine **_new_storage = new ISpaceMarine*[_capacity + 10];
		_shallow_cpy_storage(_storage, _new_storage, _capacity);
		delete [] _storage;
		_storage = _new_storage;
		_capacity += 10;
	}
	_storage[_unit_count] = unit;
	_unit_count++;
	return _unit_count;
}

void Squad::_shallow_cpy_storage(ISpaceMarine **src, ISpaceMarine **dst, int src_len) 
{
	for (int i = 0; i < src_len; i++)
		dst[i] = src[i];
}

void Squad::_deep_copy_storage(ISpaceMarine **src, ISpaceMarine **dst, int src_len)
{
	for (int i = 0; i < src_len; i++)
		dst[i] = src[i]->clone();
}

bool Squad::_isAlreadyAdded(ISpaceMarine *unit) 
{
	for (int i =  0; i < _unit_count; i++)
		if (unit == _storage[i])
			return true;
	return false;
}

void Squad::_deleteStorage() 
{
	for (int i = 0; i < _unit_count; i++)
		delete _storage[i];
	delete [] _storage;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */
