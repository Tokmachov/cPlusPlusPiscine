/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:22:56 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 21:22:57 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {

public:
    HumanB(std::string const name);

    void setWeapon(Weapon &weapon);
    void attack(void) const;
private:
    Weapon				*_weapon;
    std::string	const	_name;
};

#endif