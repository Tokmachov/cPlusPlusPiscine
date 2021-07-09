/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:48:29 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/27 16:48:31 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
	
#include <string>

class FragTrap  
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
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		FragTrap &operator=(const FragTrap &rhs);
	
	std::string getName(void) const;
	int getHitPoints(void) const;
	int getMaxHitPoints(void) const;
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
	void vaulthunter_dot_exe(std::string const & target);
};

#endif
