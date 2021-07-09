/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:37:07 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/15 14:38:16 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A : public Base
{

	public:

		A();
		A( A const & src );
		~A();

		A &		operator=( A const & rhs );

	private:

};

#endif /* *************************************************************** A_H */