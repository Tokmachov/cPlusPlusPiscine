/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:54:34 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/16 16:59:04 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &lhs, T &rhs)
{
    T tmp;
    tmp = lhs;
    lhs = rhs;
    rhs = tmp;
}

template <typename T>
T &min(T &lhs, T &rhs)
{
    if (lhs < rhs)
        return lhs;
    return rhs;  
}

template <typename T>
T &max(T &lhs, T &rhs)
{
    if (rhs < lhs)
        return lhs;
    return rhs;
}