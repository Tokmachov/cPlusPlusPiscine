/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:34:11 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/21 17:59:10 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template <typename T>

bool easyfind(const T &container, int searched_val)
{   
    if ((std::find(container.begin(), container.end(), searched_val)) != container.end())
        return true;
    else
        return false;
}

#endif