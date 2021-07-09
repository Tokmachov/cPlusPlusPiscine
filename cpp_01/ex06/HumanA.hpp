/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:22:34 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 21:22:36 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanA {

public:
    HumanA(std::string name, Weapon const &weapon);

    void attack(void) const;

private:
    std::string const _name;
    Weapon const &_weapon;
};

#endif
