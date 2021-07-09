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

#include <iostream>

class Fixed {
public:    
    Fixed(void);
    Fixed(Fixed const &src);
    Fixed(int const n);
    Fixed(float const n);
    ~Fixed(void);
	
    Fixed &operator=(Fixed const &rhs);
    
    int	getRawBits(void) const;
	void setRawBits( int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int _value;
    static const int _point_position = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif

//A constructor that takes a constant integer as a parameter 
//and that converts it to the correspondant fixed(8) point value. 
//The fractional bits value is initialized like in ex00.

//A constructor that takes a constant floating point as a 
//parameter and that converts it to the correspondant fixed(8) 
//point value. The fractional bits value is initialized like in ex00.

//A member function float toFloat( void ) const; 
//that converts the fixed point value to a floating point value.

//A member function int toInt( void ) const; that converts the 
//fixed point value to an integer value.

//An overload to the « operator that inserts a floating point 
//representation of the fixed point value into the parameter output stream.