/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:22:23 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 21:22:25 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon const &weapon) 
    : _name(name), _weapon(weapon) {}

void HumanA::attack(void) const {
    std::cout << this->_name << " attacks with his ";
    std::cout << _weapon.getType() << std::endl;
}
