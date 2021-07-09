/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 19:13:39 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

// • Hit points (Fragtrap)--------------100       
// • Max hit points (Fragtrap)----------100
// • Energy points (Ninjatrap)----------120
// • Max energy points (Ninjatrap)------120
// • Level (1)--------------------------1
// • Name (Parameter of constructor)----
// • Melee attack damage (Ninjatrap)----60
// • Ranged attack damage (Fragtrap)----20
// • Armor damage reduction (Fragtrap)--5
// • rangedAttack-----------------------(Fragtrap)
// • meleeAttack------------------------(Ninjatrap)

void superTrapConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    SuperTrap superTrap("Jim Jefrey");
}

void superTrapCharecterTests(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    SuperTrap n("Super duper trap");
    std::cout << "Hit points " << n.getHitPoints() << std::endl;
    std::cout << "Max hit points " << n.getMaxHitPoints() << std::endl;
    std::cout << "Energy points " << n.getEnergyPoints() << std::endl;
    std::cout << "Max energy points " << n.getMaxEnergyPoints() << std::endl;
    std::cout << "Melee attack damage " << n.getMeleeAttackDamage() << std::endl;
    std::cout << "Ranged attack damage " << n.getRangedAttackDamage() << std::endl;
    std::cout << "Armor damage reduction " << n.getArmorDamageReduction() << std::endl;
}

void checkMeleeAttack(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    SuperTrap superTrap("Vacuum cleaner");
    superTrap.meleeAttack(target);
}

void checkRangedAttack(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    SuperTrap superTrap("Vacuum cleaner");
    superTrap.rangedAttack(target);
}

void checkSpecialAttackFromFragTrap(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    SuperTrap superTrap("Vacuum cleaner");
    superTrap.vaulthunter_dot_exe(target);
    superTrap.vaulthunter_dot_exe(target);
    superTrap.vaulthunter_dot_exe(target);
    superTrap.vaulthunter_dot_exe(target);
    superTrap.vaulthunter_dot_exe(target);
}

void checkSpecialAttackFromNinja(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    FragTrap enemy1;
    ClapTrap enemy2;
    SuperTrap superTrap("Vacuum cleaner");
    superTrap.ninjaShoebox(enemy1);
    superTrap.ninjaShoebox(enemy2);
}

std::string readKey(void) {
	std::string key;
    std::cout << "Enter test key ";
    std::cin >> key;
	return key;
}

void show_menu(void) {
	std::cout << "---------------Menu----------------------------" << std::endl;
	
	std::cout << "Keys for tests" << std::endl;
    std::cout << "0 - Exit tests" << std::endl;
    std::cout << "1 - Supertrap construction and destruction" << std::endl;
    std::cout << "2 - Character test" << std::endl;
    std::cout << "3 - Melee attack check" << std::endl;
    std::cout << "4 - Ranged attack check" << std::endl;
    std::cout << "5 - FRAGTRAP special attack check" << std::endl;
    std::cout << "6 - Ninja special attack check" << std::endl;
}

void loopTests(void)
{
    while (1)
    {
        show_menu();
		std::string key = readKey();
        if (key.compare("0") == 0)
			exit(0);
        else if (key.compare("1") == 0)
            superTrapConstructorTest();
        else if (key.compare("2") == 0)
            superTrapCharecterTests();
        else if (key.compare("3") == 0)
            checkMeleeAttack();
        else if (key.compare("4") == 0)
            checkRangedAttack();
        else if (key.compare("5") == 0)
            checkSpecialAttackFromFragTrap();
        else if (key.compare("6") == 0)
            checkSpecialAttackFromNinja();
        else
             std::cout << "Wrong test key" << std::endl;    
    }
}

int main(void)
{   
    loopTests();
    return 0;
}
