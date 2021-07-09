/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:21:45 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 17:46:36 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_HPP
# define INTER_HPP

template <typename T>
void iter(T *arr, int size, void (*f) (const T &))
{
    for (int i = 0; i < size; i++)
        f(arr[i]);
}

#endif