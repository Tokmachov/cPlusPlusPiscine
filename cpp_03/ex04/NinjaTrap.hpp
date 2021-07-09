/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:48:07 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 17:50:56 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

	public:
		
		NinjaTrap(std::string name);
		NinjaTrap(void);
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();
	
	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const; 
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void ninjaShoebox(FragTrap &trap);
	void ninjaShoebox(NinjaTrap &trap);
	void ninjaShoebox(ClapTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
};

#endif /* ******************************************************* NINJATRAP_H */