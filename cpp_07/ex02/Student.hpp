/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:34:13 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 13:37:54 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_HPP
# define STUDENT_HPP

# include <iostream>
# include <string>

class Student
{

	public:
		Student(std::string name);
		Student();
		Student( Student const & src );
		~Student();

		Student &		operator=( Student const & rhs );

	//Accessors
	const std::string getName() const;
	private:
		std::string _name;
};

std::ostream &			operator<<( std::ostream & o, Student const & i );

#endif /* ********************************************************* STUDENT_H */