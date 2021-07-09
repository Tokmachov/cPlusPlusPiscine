/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:25:44 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 15:13:44 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap  
{
	private:
	std::string _name;
	int _hit_points;
	int _max_hit_points;
	int _max_energy_points;
	int _level;
	int _melee_attack_damage;
	int _ranged_attack_damage;
	int _armor_damage_reduction;
	int _energy_points;

	public:
	ClapTrap(std::string name);
	ClapTrap(
		std::string name,
		int hit_points,
		int max_hit_points,
		int energy_points,
		int max_energy_points,
		int level,
		int melee_attack_damage,
		int ranged_attack_damage,
		int armor_damage_reduction
	);
	ClapTrap(void);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &rhs);

	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const; 
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);	

	std::string getName(void) const;
	int getMeleeAttackDamage(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getRangedAttackDamage(void) const;
	int getMaxEnergyPoints(void) const;
	int getMaxHitPoints(void) const;
	int getArmorDamageReduction(void) const;
	
	void setHitPoints(int hit_points);
	void setEnergyPoints(int energy_points);
};

#endif
