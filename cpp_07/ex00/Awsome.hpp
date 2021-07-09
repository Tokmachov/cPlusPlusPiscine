/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awsome.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:24:41 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 17:37:10 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Awesome 
{
    public:
        Awesome( int n ) : _n( n ) {}
        Awesome() {}
        bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); } 
        bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); } 
        bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } 
        bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } 
        bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); } 
        bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); } 
        int getValue() { return _n; };
    private:
        int _n;
};