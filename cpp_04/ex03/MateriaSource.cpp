/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:49:18 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 12:17:59 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() : _materia_count(0)
{
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	_deep_cpy_mat_storage(src._storage, _storage, src._materia_count);		
	_materia_count = src._materia_count;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	_delete_materia();
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		_delete_materia();
		_deep_cpy_mat_storage(rhs._storage, _storage, rhs._materia_count);
		_materia_count = rhs._materia_count;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	o << "Materia source storage list" << std::endl;
	for (int idx = 0; idx < i.getMateriaCount(); idx++)
	{
		o << "Adress: ";
		o << i.getMateria(idx) << std::endl;
		o << *i.getMateria(idx) << std::endl;
	}
	return o;
}


/*
** --------------------------------- PUBLIC_METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* m) 
{
	if (_materia_count < STORAGE_CAPACITY)
	{
		_storage[_materia_count] = 	m;
		_materia_count += 1;
	}	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int idx = 0; idx < _materia_count; idx++)
	{
		if (_storage[idx]->getType().compare(type) == 0)
			return _storage[idx]->clone();
	}	
	return 0;
}

/*
** --------------------------------- PRIVATE_METHODS ---------------------------
*/

void MateriaSource::_deep_cpy_mat_storage(AMateria* const *src, AMateria **dst, int src_len)
{
	for (int i = 0; i < src_len; i++)
	{
		dst[i] = src[i]->clone();
	}
}

void MateriaSource::_delete_materia()
{
	for (int idx = 0; idx < _materia_count; idx++)
	{
		delete _storage[idx];
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int MateriaSource::getMateriaCount() const
{
	return _materia_count;	
}

const AMateria *MateriaSource::getMateria(int idx) const
{
	return _storage[idx];
}

/* ************************************************************************** */