/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_overflow.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:08:30 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 18:38:40 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>



int atoi_overflow(std::string s, bool *is_overflow)
{
    int sign = 1;
    int result = 0;
    int start_pos = 0;
    
    if (s[0] == '-' || s[0] == '+')
    {
        start_pos = 1;
        if (s[0] == '-')
            sign *= -1;
    } 
    for (size_t i = start_pos; i < s.length(); i++)
    {
        result = 10 * result + sign * (s[i] - '0');
        if ((sign == -1 && result > 0) || (sign == 1 && result < 0))
        {
            *is_overflow = true; 
            return 0;   
        }
    }
    return result;
}