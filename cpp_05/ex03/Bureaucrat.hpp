/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:44:20 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 13:28:02 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	
	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		
		//Accessors
		const std::string getName() const;
		int getGrade() const;
		//fucntions
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &f);
		void executeForm(Form const & form);	
	
	private:
		const std::string _name;
		int _grade;
		static const int _max_grade;
		static const int _min_grade;
	
	//Embedded classes
	class	GradeTooHighException: public std::exception {
  		public:
		  const char *what() const throw();
	};
	class	GradeTooLowException: public std::exception {
  		public:
		  const char *what() const throw ();
	};
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */