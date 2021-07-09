/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:01:57 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/02 19:39:22 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		Victim();
		Victim(std::string name);
		Victim( Victim const & src );
		~Victim();

		Victim &		operator=( Victim const & rhs );
		std::string getName() const;
		virtual void getPolymorphed() const;
	
	private:
		std::string _name;
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ********************************************************** VICTIM_H */