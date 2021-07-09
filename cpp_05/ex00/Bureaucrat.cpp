/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:44:19 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/11 12:34:29 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name), _grade(grade)
{
	if (_grade < _max_grade)
		throw GradeTooHighException();
	if (_grade > _min_grade)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat() 
	: _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
	: _name(src._name), _grade(src._grade)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		_grade = rhs._grade;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade(); 
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::incrementGrade()
{
	if (_grade == _max_grade)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == _min_grade)
		throw GradeTooLowException();
	_grade++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;	
}

/*
** --------------------------------- STATIC_VARIABLES --------------------------
*/

const int Bureaucrat::_max_grade = 1;
const int Bureaucrat::_min_grade = 150;
/* ************************************************************************** */

/*
** --------------------------------- Embedded_classes --------------------------
*/
/*
** --------------------------------- Exceptions --------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "Error. The highest grade is 1. Setting grade value below 1 is impossible.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	
	return "Error. The lowest grade is 150. Setting grade values above 150 is impossible.";
}
