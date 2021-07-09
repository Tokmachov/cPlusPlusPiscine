/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/01 12:51:23 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
#include "ScavTrap.hpp"

// • Hit points (100)
// • Max hit points (100)
// • Energy points (50)
// • Max energy points (50)
// • Level (1)
// • Name (Parameter of constructor) 
// • Melee attack damage (20)
// • Ranged attack damage (15)
// • Armor damage reduction (3)

void scavTrapConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap scavTrap("Jim Jefrey");
}

void scavTrapCharecterTests(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap n("Super duper trap");
    std::cout << "Hit points " << n.getHitPoints() << std::endl;
    std::cout << "Max hit points " << n.getMaxPoints() << std::endl;
    std::cout << "Energy points " << n.getEnergyPoints() << std::endl;
    std::cout << "Max energy points " << n.getMaxEnergyPoints() << std::endl;
    std::cout << "Melee attack damage " << n.getMeleeAttackDamage() << std::endl;
    std::cout << "Ranged attack damage " << n.getRangedAttackDamage() << std::endl;
    std::cout << "Armor damage reduction " << n.getArmorDamageReduction() << std::endl;
}

void checkMeleeAttack(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    ScavTrap scavTrap("Vacuum cleaner");
    scavTrap.meleeAttack(target);
}

void checkRangedAttack(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    ScavTrap scavTrap("Vacuum cleaner");
    scavTrap.rangedAttack(target);
}

void checkTakeDamageTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap scavTrap("Vacuum cleaner");
    scavTrap.takeDamage(10);
    scavTrap.takeDamage(115);
    scavTrap.takeDamage(10);
}

void checkBeRepairedTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    ScavTrap scavTrap("Vacuum cleaner");
    scavTrap.takeDamage(50);
    scavTrap.challengeNewcomer();
    scavTrap.beRepaired(10);
    scavTrap.beRepaired(100);
    scavTrap.beRepaired(10);
}

void checkSpecialAttackFromscavTrap(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::string target = "Robot Fyodor";
    ScavTrap scavTrap("Vacuum cleaner");
    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
    scavTrap.challengeNewcomer();
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
    std::cout << "1 - scavTrap construction and destruction" << std::endl;
    std::cout << "2 - Character test" << std::endl;
    std::cout << "3 - Melee attack check" << std::endl;
    std::cout << "4 - Ranged attack check" << std::endl;
    std::cout << "5 - scavTrap special attack check" << std::endl;
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
            scavTrapConstructorTest();
        else if (key.compare("2") == 0)
            scavTrapCharecterTests();
        else if (key.compare("3") == 0)
            checkMeleeAttack();
        else if (key.compare("4") == 0)
            checkRangedAttack();
        else if (key.compare("5") == 0)
            checkSpecialAttackFromscavTrap();
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
