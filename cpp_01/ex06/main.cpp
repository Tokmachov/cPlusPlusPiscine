/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:23:06 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 21:23:07 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    {
        Weapon	club = Weapon("crude spiked club");
        HumanA	bob("Bob", club);
        
		bob.attack();
        club.setType("Covered in jam club");
        bob.attack();
    }
    {
        Weapon  club = Weapon("crude spiked club");
        HumanB  jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Agly and scarry club");
        jim.attack();
    }
    return (0);
}
