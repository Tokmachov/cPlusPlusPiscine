/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:38:59 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 15:24:49 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
	
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {
	
	public:
	ScavTrap(std::string name);
	ScavTrap(void);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);	

	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const; 
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void challengeNewcomer(void);	
};

#endif