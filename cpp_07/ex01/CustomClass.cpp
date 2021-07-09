/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:15:46 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/16 19:30:51 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CustomClass.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

CustomClass::CustomClass(int h, int m, int s)
	: hour(h), minute(m), second(s)
{
}

CustomClass::CustomClass()
	: hour(1), minute(1), second(1)
{
}

std::ostream &operator<<(std::ostream &o, const CustomClass &i)
{
	o << "Hour: " << i.hour << std::endl;
	o << "Minute: " << i.minute << std::endl;
	o << "Second: " << i.second << std::endl;
	return o;
}

/* ************************************************************************** */