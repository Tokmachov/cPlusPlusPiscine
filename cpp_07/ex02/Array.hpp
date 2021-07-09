/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 20:56:30 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 12:34:33 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{

	public:

		Array();
		Array(unsigned int n);
		Array( Array const & src );
		~Array();

		Array &		operator=( Array const & rhs );
		//functions
		unsigned int size();
		T &operator[] (unsigned int idx);

	private:
		T *_storage;
		unsigned int _count;
		//Exceptions
		class IndexOutOfRangeException: public std::exception
		{
			virtual const char* what() const throw();
		};
};

#include "Array.h"
#endif /* *********************************************************** ARRAY_H */