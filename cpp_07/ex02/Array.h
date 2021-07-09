/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:56:29 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 10:57:36 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template <typename T>
Array<T>::Array()
{
	std::cout << "Default is called" << std::endl;
	_storage = new T[0];
	_count = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "N constructor is called" << std::endl;
	_storage = new T[n];
	_count = n;
}

template <typename T>
Array<T>::Array( const Array & src )
{
	std::cout << "Copy constructor is called" << std::endl;
	_count = src._count;
	_storage = new T[src._count];
	for (unsigned int i = 0; i < src._count; i++)
		_storage[i] = src._storage[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor is called" << std::endl;
	delete [] _storage;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
template <typename T>
Array<T> &				Array<T>::operator=( Array<T> const & rhs )
{
	std::cout << "Assignment is called" << std::endl;
	
	if ( this != &rhs )
	{
		_count = rhs._count;
		delete [] _storage;
		_storage = new T[rhs._count];
		for (unsigned int i = 0; i < rhs._count; i++)
			_storage[i] = rhs._storage[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[] (unsigned int idx)
{
	if (idx >= 0 && idx < _count)
		return _storage[idx];
	else
		throw IndexOutOfRangeException();
}

/*
** --------------------------------- METHODS ----------------------------------
*/
template <typename T>
unsigned int Array<T>::size()
{
	return _count;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- Exceptions --------------------------------
*/
template <typename T>
const char* Array<T>::IndexOutOfRangeException::what() const throw()
{
	return "Error: idex is out of range.";	
}

/* ************************************************************************** */