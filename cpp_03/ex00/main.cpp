/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/01 12:30:43 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
#include "FragTrap.hpp"

// • Hit points (100)
// • Max hit points (100)
// • Energy points (100)
// • Max energy points (100)
// • Level (1)
// • Name (Parameter of constructor) 
// • Melee attack damage (30)
// • Ranged attack damage (20)
// • Armor damage reduction (5)

void fragTrapConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap fragTrap("Jim Jefrey");
}

void fragTrapCharecterTests(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap n("Super duper trap");
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
    FragTrap fragTrap("Vacuum cleaner");
    fragTrap.meleeAttack(target);
}

void checkRangedAttack(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    FragTrap fragTrap("Vacuum cleaner");
    fragTrap.rangedAttack(target);
}

void checkTakeDamageTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap fragTrap("Vacuum cleaner");
    fragTrap.takeDamage(10);
    fragTrap.takeDamage(115);
    fragTrap.takeDamage(10);
}

void checkBeRepairedTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    FragTrap fragTrap("Vacuum cleaner");
    fragTrap.takeDamage(50);
    fragTrap.vaulthunter_dot_exe(target);
    fragTrap.beRepaired(10);
    fragTrap.beRepaired(100);
    fragTrap.beRepaired(10);
}

void checkSpecialAttackFromFragTrap(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    FragTrap fragTrap("Vacuum cleaner");
    fragTrap.vaulthunter_dot_exe(target);
    fragTrap.vaulthunter_dot_exe(target);
    fragTrap.vaulthunter_dot_exe(target);
    fragTrap.vaulthunter_dot_exe(target);
    fragTrap.vaulthunter_dot_exe(target);
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
    std::cout << "1 - FragTrap construction and destruction" << std::endl;
    std::cout << "2 - Character test" << std::endl;
    std::cout << "3 - Melee attack check" << std::endl;
    std::cout << "4 - Ranged attack check" << std::endl;
    std::cout << "5 - FRAGTRAP special attack check" << std::endl;
    std::cout << "6 - Take damage test" << std::endl;
    std::cout << "7 - BeRepaired test" << std::endl;
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
            fragTrapConstructorTest();
        else if (key.compare("2") == 0)
            fragTrapCharecterTests();
        else if (key.compare("3") == 0)
            checkMeleeAttack();
        else if (key.compare("4") == 0)
            checkRangedAttack();
        else if (key.compare("5") == 0)
            checkSpecialAttackFromFragTrap();
        else if (key.compare("6") == 0)
            checkTakeDamageTest();
        else if (key.compare("7") == 0)
            checkBeRepairedTest();
        else
             std::cout << "Wrong test key" << std::endl;    
    }
}

int main(void)
{   
    loopTests();
    return 0;
}
