/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/30 16:48:48 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <string.h>
#include <iostream>

//FRAGTRAP
// • Hit point--------------------------100       
// • Max hit points---------------------100
// • Energy points----------------------100
// • Max energy points------------------100
// • Level (1)---------------------------1
// • Name (Parameter of constructor)----
// • Melee attack damage----------------30
// • Ranged attack damage---------------20
// • Armor damage reduction-------------5

//SCAVTRAP
// • Hit point--------------------------100       
// • Max hit points---------------------100
// • Energy points----------------------50
// • Max energy points------------------50
// • Level (1)---------------------------1
// • Name (Parameter of constructor)----
// • Melee attack damage----------------20
// • Ranged attack damage---------------15
// • Armor damage reduction-------------3


static void parantConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
	ClapTrap clapTrap("Rocky Raccoon");
}

static void fragTrapConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap fragTrap("Rocky Raccoon");
}

static void fragTrapAttacksTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap a("Hashashin");
    std::string target = "marshmallow factory";
    a.rangedAttack(target);
    a.meleeAttack(target);
}

static void fragTrapTakeDamageTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap a("Hashashin");
    a.takeDamage(10);
    a.takeDamage(120);
    a.takeDamage(10);
}

static void fragTrapSpecialAttackTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap a("Hashashin");
    std::string target = "marshmallow factory";
    a.vaulthunter_dot_exe(target);
    a.vaulthunter_dot_exe(target);
    a.vaulthunter_dot_exe(target);
    a.vaulthunter_dot_exe(target);
    a.vaulthunter_dot_exe(target);
}

static void fragTrapBeRepairedTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    FragTrap a("Hashashin");
    std::string target = "marshmallow factory";
    a.vaulthunter_dot_exe(target);
    a.takeDamage(15);
    a.beRepaired(10);
    a.beRepaired(100);
}


static void scavTrapConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap scavTrap("Rocky Raccoon");
}

static void scavTrapAttacksTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap a("Hashashin");
    std::string target = "marshmallow factory";
    a.rangedAttack(target);
    a.meleeAttack(target);
}

static void scavTrapTakeDamageTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap a("Hashashin");
    a.takeDamage(10);
    a.takeDamage(120);
    a.takeDamage(10);
}

static void scavTrapSpecialAttackTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap a("Hashashin");
    std::string target = "marshmallow factory";
    a.challengeNewcomer();
    a.challengeNewcomer();
    a.challengeNewcomer();
    a.challengeNewcomer();
    a.challengeNewcomer();
}

static void scavTrapBeRepairedTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    ScavTrap a("Hashashin");
    std::string target = "marshmallow factory";
    a.challengeNewcomer();
    a.takeDamage(15);
    a.beRepaired(10);
    a.beRepaired(100);
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
    std::cout << "1 - Parent construction and destruction" << std::endl;
    std::cout << "2 - FragTrap construction and destruction" << std::endl;
    std::cout << "3 - FragTrap attacks" << std::endl;
    std::cout << "4 - FragTrap take damage" << std::endl;
    std::cout << "5 - FragTrap special attack test" << std::endl;
    std::cout << "6 - FragTrap beReapaired test" << std::endl;
    std::cout << "7 - ScavTrap construction and destruction" << std::endl;
    std::cout << "8 - ScavTrap attacks" << std::endl;
    std::cout << "9 - ScavTrap take damage" << std::endl;
    std::cout << "10 - ScavTrap special attack test" << std::endl;
    std::cout << "11 - ScavTrap beReapaired test" << std::endl;
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
            parantConstructorTest();
        else if (key.compare("2") == 0)
            fragTrapConstructorTest();
        else if (key.compare("3") == 0)
            fragTrapAttacksTest();
        else if (key.compare("4") == 0)
            fragTrapTakeDamageTest();
        else if (key.compare("5") == 0)
            fragTrapSpecialAttackTest();
        else if (key.compare("6") == 0)
            fragTrapBeRepairedTest();
        else if (key.compare("7") == 0)
            scavTrapConstructorTest();
        else if (key.compare("8") == 0)
            scavTrapAttacksTest();
        else if (key.compare("9") == 0)
            scavTrapTakeDamageTest();
        else if (key.compare("10") == 0)
            scavTrapSpecialAttackTest();
        else if (key.compare("11") == 0)
            scavTrapBeRepairedTest();
        else
            std::cout << "Wrong test key" << std::endl;    
    }
}

int main(void)
{   
    loopTests();
    return 0;
}
