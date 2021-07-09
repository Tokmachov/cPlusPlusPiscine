/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:02:26 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/02 17:02:27 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer(std::string name, std::string title)
	: _name(name), _title(title) 
{
	std::cout << _name << ", "<< _title; 
	std::cout << " " << "is born" << std::endl;
}
//private
Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer( const Sorcerer & src )
{	
	this->_name = src._name;
	this->_title = src._title;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title;
	std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle();
	o << ", and I like ponies!" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Sorcerer::polymorph(Victim const &v) const {
	v.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Sorcerer::getName() const {
	return _name;
}
std::string Sorcerer::getTitle() const {
	return _title;
}

/* ************************************************************************** */