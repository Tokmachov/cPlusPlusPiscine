/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:44:19 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 13:30:51 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
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
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << "Bureaucrat: " << getName() << " signes form: " << f.getName();
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Bureaucrat: " << getName() << " can not sign form: ";
		std::cout << f.getName() << " because " << e.what() << std::endl; 
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat: " << getName() << " executed form ";
		std::cout << form.getName() << " Successfully." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
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
** --------------------------------- Exceptions --------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "Error. The grade is to high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Error. The grade is to low.";
}

/*
** --------------------------------- STATIC_VARIABLES --------------------------
*/

const int Bureaucrat::_max_grade = 1;
const int Bureaucrat::_min_grade = 150;
/* ************************************************************************** */

