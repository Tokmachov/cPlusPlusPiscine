/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:02:35 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 14:37:16 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:

		Peon();
		Peon(std::string name);
		Peon( Peon const & src );
		~Peon();

		Peon &		operator=( Peon const & rhs );
		virtual void getPolymorphed() const;
	private:

};

#endif /* ************************************************************ PEON_H */

