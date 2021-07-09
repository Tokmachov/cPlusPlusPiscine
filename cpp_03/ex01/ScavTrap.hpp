/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:52:54 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/27 16:52:56 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>

class ScavTrap  
{
	private:
		std::string _name;
		int _hit_points;
		int _max_hit_points;
		int _energy_points;
		int _max_energy_points;
		int _level;
		int _melee_attack_damage;
		int _ranged_attack_damage;
		int _armor_damage_reduction;

		void _makeFitIntoLimits(int &hp_or_energy, int upper_bound) const;
		void _printAttack(const std::string &t_n, std::string type, int dmg) const;
		void _printDamage(int damage, int hp_before) const;
		void _printRepair(int hp_before, int e_before) const;
	
	public:
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(const ScavTrap &src);
	
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &rhs);

		std::string getName(void) const;
		int getHitPoints(void) const;
		int getMaxPoints(void) const;
		int getEnergyPoints(void) const;
		int getMaxEnergyPoints(void) const;
		int getLevel(void) const;
		int getMeleeAttackDamage(void) const;
		int getRangedAttackDamage(void) const;
		int getArmorDamageReduction(void) const;

		void rangedAttack(std::string const & target) const;
		void meleeAttack(std::string const & target) const; 
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(void);
};

#endif
