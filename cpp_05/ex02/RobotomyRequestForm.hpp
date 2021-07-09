/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:16:08 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 15:57:55 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();
	
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		
		//methods
		virtual void performFormsJob() const;
		//Accessors
		const std::string getTarget() const;
	private:
		std::string _target;

	class RobotomizationFailure: public std::exception {
  		public:
		  const char *what() const throw();
	};
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */