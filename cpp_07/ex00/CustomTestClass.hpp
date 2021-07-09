/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomTestClass.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:42:11 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/16 14:26:39 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUSTOMTESTCLASS_H
# define CUSTOMTESTCLASS_H

class CustomTestClass
{
    public:
        int _value;
    bool operator<(const CustomTestClass &rhs) const;
};

#endif