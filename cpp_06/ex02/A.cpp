/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:37:07 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/15 14:43:52 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

A::A() : Base()
{
}

A::A( const A & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

A::~A()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

A &				A::operator=( A const & rhs )
{
	(void)rhs;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */