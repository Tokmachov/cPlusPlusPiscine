/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:40:11 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/24 18:40:13 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
public:    
    Fixed(void);
    Fixed(Fixed const &src);
    Fixed & operator=(Fixed const &rhs);
    ~Fixed(void);
	int	getRawBits(void) const;
	void setRawBits( int const raw);

private:
    int _value;
    static const int point_position = 8;
};

#endif
