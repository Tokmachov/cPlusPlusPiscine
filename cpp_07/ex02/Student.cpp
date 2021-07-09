/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:34:13 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 13:46:11 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Student::Student(std::string name) : _name(name)
{
}

Student::Student() : _name("default")
{
}

Student::Student( const Student & src )
{
	_name = src._name;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Student::~Student()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Student &				Student::operator=( Student const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs._name;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Student const & i )
{
	o << "Name = " << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Student::getName() const
{
	return _name;
}

/* ************************************************************************** */