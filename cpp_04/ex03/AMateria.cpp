/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 21:28:34 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/06 18:45:12 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type)
	: _xp(0), _type(type)
{
}

AMateria::AMateria() 
	: _xp(0), _type("default type")
{
}

AMateria::AMateria( const AMateria & src ) : _xp(src._xp), _type(src._type)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		_xp = rhs._xp;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "AMateria. Type: " << i.getType() << ", XP: " << i.getXP();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
	return _xp;
}

void AMateria::use(ICharacter& target) 
{
	(void)target;
	_xp+= 10;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */