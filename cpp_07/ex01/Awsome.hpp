/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awsome.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:48:59 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 14:50:41 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWSOME_HPP
# define AWSOME_HPP
# include <iostream>

class Awesome
{
    public:
    Awesome( void ) : _n( 42 ) { return; } 
        int get( void ) const { return this->_n; } 
    private:
        int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

#endif