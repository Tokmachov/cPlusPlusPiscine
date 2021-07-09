/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:55:17 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 21:28:34 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <exception>

class Intern
{

	public:
	
		Intern();
		Intern( Intern const & src );
		virtual ~Intern();

		Intern &		operator=( Intern const & rhs );
		//methods
		Form *makeForm(std::string name, std::string target);
		
		//Embedded class exceptions
		class UnknownFormException: public std::exception
		{
			virtual const char* what() const throw();
		};
		struct MakeFormFunctionsAndIds
		{
			Form *(Intern::*f)(std::string) const;
			std::string id;	
		};
	private:
		//atributes
		MakeFormFunctionsAndIds _funcs_and_ids_storage[3];
		//methods
		Form *_makePresidentPardonForm(std::string target) const;
		Form *_makeRobotForm(std::string target) const;
		Form *_makeShrubbery(std::string target) const;
};

#endif /* ********************************************************** INTERN_H */