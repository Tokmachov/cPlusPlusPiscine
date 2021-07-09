/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntContainer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:57:07 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/21 18:14:10 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IntContainer.hpp"
# include <algorithm>
# include <cmath>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

IntContainer::IntContainer(unsigned int n) 
	: _max_size(n) {}

IntContainer::IntContainer()
	: _max_size(0) {}

IntContainer::IntContainer( const IntContainer & src )
{
	_storage = src._storage;
	_max_size = src._max_size;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

IntContainer::~IntContainer()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

IntContainer &				IntContainer::operator=( IntContainer const & rhs )
{
	if (this != &rhs)
	{
		_storage = rhs._storage;
		_max_size = rhs._max_size;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void IntContainer::addNumber(int num)
{
	if (_storage.size() >= _max_size)
		throw StorageIsFull();
	_storage.push_back(num);
}

int IntContainer::longestSpan()
{	
	if (_storage.size() < 2)
		throw NotEnoughElementsToFindSpan();
	sort(_storage.begin(), _storage.end());
	return *(_storage.end() - 1) - *_storage.begin();	
}

int IntContainer::shortestSpan()
{
	std::vector<int>::iterator iter;
	int span;
	
	if (_storage.size() < 2)
		throw NotEnoughElementsToFindSpan();	
	sort(_storage.begin(), _storage.end());
	span = *(_storage.begin() + 1) - *_storage.begin();
	for (iter = _storage.begin(); iter < _storage.end() - 1; iter++)
	{
		if ((*(iter + 1) - *iter) < span)
			span = *(iter + 1) - *iter;
	}
	return span;
}
/*
** --------------------------------- PRIVATE METHODS ---------------------------
*/

int IntContainer::_available_size(void) const
{
	return _max_size - _storage.size();		
}

/*
** --------------------------------- Accessors --------------------------------
*/

std::vector<int> &IntContainer::getStorage()
{
	return 	_storage;
}

/*
** --------------------------------- Exceptions --------------------------------
*/

const char* IntContainer::StorageIsFull::what() const throw()
{
	return "Error: new element can't be added because storage is full.";
}

const char* IntContainer::NotEnoughElementsToFindSpan::what() const throw()
{
	return "Error: there are not enough elements to find span.";
}

const char* IntContainer::RangeCantBeAdded::what() const throw()
{
	return "Error: range can not be added because storage capacity is not enough.";
}

/*
** --------------------------------- << overload>> -----------------------------
*/

std::ostream &operator<<(std::ostream &o, IntContainer &c)
{
	std::vector<int>::iterator iter;
	o << "Storage: " << std::endl;
	for (iter = c.getStorage().begin(); iter < c.getStorage().end(); iter++)
	{
		o << *iter << " ";
	}
	return o;
}

/* ************************************************************************** */