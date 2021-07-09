/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomTestClass.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:13:10 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/16 14:26:55 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CustomTestClass.hpp"

bool CustomTestClass::operator<(const CustomTestClass &rhs) const
{
    return _value < rhs._value;
}
