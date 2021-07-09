/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:55:17 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/11 13:05:51 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	_funcs_and_ids_storage[0].id = "shrubbery creation request";
	_funcs_and_ids_storage[0].f = &Intern::_makeShrubbery;
	_funcs_and_ids_storage[1].id = "robotomy request";
	_funcs_and_ids_storage[1].f = &Intern::_makeRobotForm;
	_funcs_and_ids_storage[2].id = "presidential pardon request";
	_funcs_and_ids_storage[2].f = &Intern::_makePresidentPardonForm;
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *(Intern::*f)(std::string) const;
	
	for (int i = 0; i < 3; i++)
	{
		if (_funcs_and_ids_storage[i].id.compare(name) == 0)
		{
			f = _funcs_and_ids_storage[i].f;
			return (this->*f)(target);
		}
	}
	throw UnknownFormException();
	return 0;
}

/*
** --------------------------------- PRIVATE METHODS ---------------------------
*/

Form *Intern::_makePresidentPardonForm(std::string target) const
{
	return new PresidentialPardonForm(target);
}
Form *Intern::_makeRobotForm(std::string target) const
{
	return new RobotomyRequestForm(target);
}

Form *Intern::_makeShrubbery(std::string target) const
{
	return new ShrubberyCreationForm(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/*
** --------------------------------- Embedded exception classes ----------------
*/

const char* Intern::UnknownFormException::what() const throw()
{
	return "Error: unknown type of form";
}

/* ************************************************************************** */