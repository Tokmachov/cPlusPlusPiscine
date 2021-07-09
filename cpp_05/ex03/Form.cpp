/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:05:51 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 12:51:23 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Form::Form(std::string name, int grade_to_sign, int grade_to_ex)
	: _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), 
	_grade_to_ex(grade_to_ex)
{
	if (_grade_to_ex < _max_grade || _grade_to_sign < _max_grade)
		throw GradeTooHighException();
	if (_grade_to_ex > _min_grade || _grade_to_sign > _min_grade)
		throw GradeTooLowException();
}

Form::Form()
	: _name("default"), _is_signed(false), _grade_to_sign(150), 
	_grade_to_ex(150)
{	
}

Form::Form( const Form & src )
	: _name(src._name), _is_signed(src._is_signed), 
	_grade_to_sign(src._grade_to_sign), 
	_grade_to_ex(src._grade_to_ex)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		_is_signed = rhs._is_signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form name: " << i.getName() << ". Is signed: " << i.getSignedStatus();
	o << " Grade required to sign: " << i.getGradeToSign();
	o << ". Grade required to execute " << i.getGradeToExecute();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= getGradeToSign())	
		_is_signed = true;
	else
		throw GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const
{
	_check_if_executableBy(executor);
	performFormsJob();
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::_check_if_executableBy(const Bureaucrat &b) const
{
	if(getSignedStatus() != true)
		throw FormIsNotSignedException();
	if (b.getGrade() >= getGradeToExecute())
		throw ExecuteGradeIsTooLowException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Form::getName() const
{
	return _name;	
}

bool Form::getSignedStatus() const
{
	return _is_signed;
}

int	Form::getGradeToSign() const
{
	return _grade_to_sign;
}

int Form::getGradeToExecute() const
{
	return _grade_to_ex;
}

/*
** --------------------------------- Exceptions --------------------------
*/

const char* Form::GradeTooHighException::what() const throw ()
{
	return "Error. The grade is to high";
}

const char* Form::GradeTooLowException::what() const throw ()
{
	return "Error. The grade is to low.";
}

const char* Form::FormIsNotSignedException::what() const throw ()
{
	return "Error. Form is not signed";
}

const char* Form::ExecuteGradeIsTooLowException::what() const throw ()
{
	return "Error. The execute grade is to low.";
}

/* ************************************************************************** */