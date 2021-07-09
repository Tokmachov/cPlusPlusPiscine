/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:26:21 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/21 17:47:31 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const Container &ctnr)
    : std::stack<T, Container>(ctnr)
{
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack( const MutantStack & src )
{
	this->c = src.c;
}


// /*
// ** -------------------------------- DESTRUCTOR --------------------------------
// */

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
}


// /*
// ** --------------------------------- OVERLOAD ---------------------------------
// */

template <typename T, typename Container>
MutantStack<T, Container> & MutantStack<T, Container>::operator=( MutantStack const & rhs )
{
	if ( this != &rhs )
	{
		std::stack<T, Container>::c = rhs.c;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */