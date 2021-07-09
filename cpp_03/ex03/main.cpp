/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 17:35:52 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// • Hit points (60)
// • Max hit points (60)
// • Energy points (120)
// • Max energy points (120)
// • Level (1)
// • Name (Parameter of constructor)
// • Melee attack damage (60)
// • Ranged attack damage (5)
// • Armor damage reduction (0)

static void ninjaTrapConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    NinjaTrap ninjaTrap("Rocky Raccoon");
}

static void ninjaTrapAttacksTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    NinjaTrap a("Hashashin");
    std::string target = "marshmallow factory";
    a.rangedAttack(target);
    a.meleeAttack(target);
}

static void ninjaTrapTakeDamageTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    NinjaTrap a("Hashashin");
    a.takeDamage(10);
    a.takeDamage(120);
    a.takeDamage(10);
}

static void ninjaTrapSpecialAttackTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    NinjaTrap a("Hashashin");
    FragTrap frag("12 oz mouse");
    ClapTrap clap("Elton John");
    ScavTrap scav("Z");
    
    a.ninjaShoebox(a);
    a.ninjaShoebox(frag);
    a.ninjaShoebox(clap);
    a.ninjaShoebox(scav);
}

static void ninjaTrapBeRepairedTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    NinjaTrap a("Hashashin");
    FragTrap f("Johny");
    std::string target = "marshmallow factory";
    a.ninjaShoebox(f);
    a.takeDamage(15);
    a.beRepaired(10);
    a.beRepaired(100);
}

static void ninjaTrapCharecterTests(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    NinjaTrap n("Bloody Ninja");
    std::cout << "Hit points " << n.getHitPoints() << std::endl;
    std::cout << "Max hit points " << n.getMaxHitPoints() << std::endl;
    std::cout << "Energy points " << n.getEnergyPoints() << std::endl;
    std::cout << "Max energy points " << n.getMaxEnergyPoints() << std::endl;
    std::cout << "Melee attack damage " << n.getMeleeAttackDamage() << std::endl;
    std::cout << "Ranged attack damage " << n.getRangedAttackDamage() << std::endl;
    std::cout << "Armor damage reduction " << n.getArmorDamageReduction() << std::endl;
}

static std::string readKey(void) {
	std::string key;
    std::cout << "Enter test key ";
    std::cin >> key;
	return key;
}

static void show_menu(void) {
	std::cout << "---------------Menu----------------------------" << std::endl;
	
	std::cout << "Keys for tests" << std::endl;
    std::cout << "0 - Exit tests" << std::endl;
    std::cout << "1 - NinjaTrap construction and destruction" << std::endl;
    std::cout << "2 - NinjaTrap attacks" << std::endl;
    std::cout << "3 - NinjaTrap take damage" << std::endl;
    std::cout << "4 - NinjaTrap special attack test" << std::endl;
    std::cout << "5 - NinjaTrap beReapaired test" << std::endl;
    std::cout << "6 - NinjaTrap Character test" << std::endl;
}

static void loopTests(void)
{
    while (1)
    {
        show_menu();
		std::string key = readKey();
        if (key.compare("0") == 0)
			exit(0);
        else if (key.compare("1") == 0)
            ninjaTrapConstructorTest();
        else if (key.compare("2") == 0)
            ninjaTrapAttacksTest();
        else if (key.compare("3") == 0)
            ninjaTrapTakeDamageTest();
        else if (key.compare("4") == 0)
            ninjaTrapSpecialAttackTest();
        else if (key.compare("5") == 0)
            ninjaTrapBeRepairedTest();
        else if (key.compare("6") == 0)
            ninjaTrapCharecterTests();
        else
             std::cout << "Wrong test key" << std::endl;    
    }
}

int main(void)
{   
    loopTests();
    return 0;
}
