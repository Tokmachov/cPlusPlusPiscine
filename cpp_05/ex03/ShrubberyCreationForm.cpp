/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:00:01 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 15:45:13 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
//(Required grades: sign 145, exec 137)
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
	: Form(src), _target(src._target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

void ShrubberyCreationForm::performFormsJob() const
{
	std::ofstream output_file;
	
	output_file.open(getTarget() + "_shrubbery");
	if (output_file.is_open() == 0)
		throw OpenFileException();
	output_file << "├── dir" << std::endl;
	output_file << "│   └── dir1" << std::endl;
	output_file << "│       └── dir2" << std::endl;
	output_file << "└── dir3" << std::endl;
	output_file << "    └── dir4" << std::endl;
	output_file << "        └── dir5" << std::endl;
	output_file << "            └── dir6" << std::endl;
	output_file.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string ShrubberyCreationForm::getTarget() const
{
	return _target;	
}

/*
** --------------------------------- Exception classes -------------------------
*/

const char *ShrubberyCreationForm::OpenFileException::what() const throw()
{
	return "Error. Failed to open file";
}

/* ************************************************************************** */