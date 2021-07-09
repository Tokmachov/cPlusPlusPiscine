/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:16:08 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 16:01:02 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <sys/time.h>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//(Required grades: sign 72, exec 45)
RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
	: Form(src), _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		Form::operator= (rhs);
		_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::performFormsJob() const
{
	struct timeval time;
	gettimeofday(&time, NULL);
	std::cout << "Noise: ZzZZzZxXXXXZZZZZZZzzZZzZZZZzzzzzzZ" << std::endl;
	if (time.tv_usec % 2 == 0)
	{
		std::cout << getTarget() << " has been robotomized successfully";
		std::cout << std::endl;
	}
	else
		throw RobotomizationFailure();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string RobotomyRequestForm::getTarget() const
{
	return _target;	
}

/*
** --------------------------------- Exceptions --------------------------------
*/

const char *RobotomyRequestForm::RobotomizationFailure::what() const throw()
{
	return "Error. Failed to robotomize.";
}

/* ************************************************************************** */