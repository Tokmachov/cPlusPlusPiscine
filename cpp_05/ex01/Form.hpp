/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:05:51 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 12:35:13 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:
		Form(std::string name, int grade_to_sign, int grade_to_ex);
		Form();
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );
		
		//Accessors
		const std::string getName() const;
		bool getSignedStatus() const;
		int	getGradeToSign() const;
		int getGradeToExecute() const;
		
		//member functions
		void beSigned(const Bureaucrat &b);
	private:
		const std::string _name;
		bool _is_signed;
		const int _grade_to_sign;
		const int _grade_to_ex;
		
		const static int _min_grade = 150;
		const static int _max_grade = 1;
	
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

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */