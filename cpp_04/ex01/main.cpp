/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 18:24:30 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "BaseballBat.hpp"
#include "Ghoul.hpp"

std::string test1 = "Plasma rifle Getters";
std::string test2 = "Plasma rifle attack";
std::string test3 = "PowerFist Getters";
std::string test4 = "PowerFist attack";
std::string test5 = "Enemy getters";
std::string test6 = "Enemy take damage";
std::string test7 = "SuperMutant construction/destruction/Character/takeDamage";
std::string test8 = "RadScorpion construction/destruction/Character";
std::string test9 = "Character equip";
std::string test10 = "Character attack";
std::string test11 = "Character Recover AP";
std::string test12 = "Subject";
std::string test13 = "Baseball bat and Ghoul";
std::string test14 = "Enemy hp must not drop below zero";
std::string test15 = "";
std::string test16 = "";

// ◦ Name: "Plasma Rifle"
// ◦ Damage: 21
// ◦ AP cost: 5
void testFunc1(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    PlasmaRifle rifle;
    std::cout << "Name: " << rifle.getName() << std::endl;
    std::cout << "APcost: " << rifle.getAPCost() << std::endl;
    std::cout <<  "Damage: " << rifle.getDamage() << std::endl;
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    PlasmaRifle rifle;
    rifle.attack();
}

// ◦ Name: "Power Fist"
// ◦ Damage: 50
// ◦ AP cost: 8
// ◦ Output of attack(): "* pschhh... SBAM! *"

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    PowerFist powerFist;
    std::cout << "Name: " << powerFist.getName() << std::endl;
    std::cout << "APcost: " << powerFist.getAPCost() << std::endl;
    std::cout <<  "Damage: " << powerFist.getDamage() << std::endl;
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    PowerFist powerFist;
    powerFist.attack();
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Enemy en(100, "Wild beast");
    std::cout << "HP: " << en.getHP() << std::endl;
    std::cout << "Type: " << en.getType() << std::endl;
}

void testFunc6(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Enemy en(100, "Wild beast");
    std::cout << "HP before " << en.getHP() << std::endl;
    en.takeDamage(-1);
    std::cout << "HP after " << en.getHP() << std::endl;
    std::cout << "HP before " << en.getHP() << std::endl;
    en.takeDamage(10);
    std::cout << "HP after " << en.getHP() << std::endl;
    std::cout << "HP before " << en.getHP() << std::endl;
    en.takeDamage(100);
    std::cout << "HP after " << en.getHP() << std::endl;
    std::cout << "HP before " << en.getHP() << std::endl;
    en.takeDamage(100);
    std::cout << "HP after " << en.getHP() << std::endl;
}
// • HP: 170
// • Type: "Super Mutant"
// • On birth, displays: "Gaaah. Me want smash heads!"
// • Upon death, displays: "Aaargh..."
// • Overloads takeDamage to take 3 less damage points than 
// normal (Yeah, they’re kinda strong, these guys.)
void testFunc7(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    SuperMutant s;
    std::cout << s << std::endl;
    std::cout << "HP before damage: " << s.getHP() << std::endl;
    s.takeDamage(10);
    std::cout << "HP after damage: " << s.getHP() << std::endl;
    std::cout << "HP before damage: " << s.getHP() << std::endl;
    s.takeDamage(170);
    std::cout << "HP after damage: " << s.getHP() << std::endl;
}

// ◦ HP: 80
// ◦ Type: "RadScorpion"
// ◦ On birth, displays: "* click click click *" 
// ◦ Upon death, displays: "* SPROTCH *"
void testFunc8(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    RadScorpion r;
    std::cout << "Type :" << r.getType() << std::endl;
    std::cout << "HP :" << r.getHP() << std::endl;
}

void testFunc9(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    PowerFist pf;
    PlasmaRifle pr;
    Character c("John", pr);
    c.equip(0);
    std::cout << c << std::endl;
    c.equip(&pf);
    std::cout << c << std::endl;
    c.equip(&pr);
    std::cout << c << std::endl;
}

void testFunc10(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    PowerFist pf;
    PlasmaRifle pr;
    RadScorpion radScorp;
    Character c("John", pr);
    
    c.equip(0);
    std::cout << c << std::endl;
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.equip(&pf);
    std::cout << c << std::endl;
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.equip(&pr);
    std::cout << c << std::endl;
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
    
    c.attack(&radScorp);
    std::cout << c << std::endl;
    std::cout << radScorp << std::endl;
}

void testFunc11(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    PlasmaRifle pr;
    RadScorpion radScorp;
    Character c("John", pr);
    std::cout << c << std::endl;
    c.attack(&radScorp);
    std::cout << c << std::endl;
    c.recoverAP();
    std::cout << c << std::endl;
    c.recoverAP();
    std::cout << c << std::endl;
}

void testFunc12(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Character* me = new Character("me");
    std::cout << *me << std::endl;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me << std::endl;
    me->equip(pf);
    std::cout << *b << std::endl;
    me->attack(b);
    std::cout << *me <<std::endl;
    std::cout << *b << std::endl;
    me->equip(pr);
    std::cout << *me << std::endl;
    me->attack(b);
    std::cout << *me << std::endl;
    std::cout << *b << std::endl;
    me->attack(b);
    std::cout << *me << std::endl;
    std::cout << *b << std::endl;
    delete b;
    delete me;
    delete pr;
    delete pf;
}

void testFunc13(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Character *man =  new Character("Jack");
    std::cout << *man << std::endl;
    Ghoul *enemy = new Ghoul();
    BaseballBat *bat = new BaseballBat();
    man->equip(bat);
    man->attack(enemy);
    std::cout << *man << std::endl;
    delete enemy;
    delete man;
    delete bat;
}

void testFunc14(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Character *man =  new Character("Jack");
    std::cout << *man << std::endl;
    Ghoul *enemy = new Ghoul();
    BaseballBat *bat = new BaseballBat();
    man->equip(bat);
    man->attack(enemy);
    std::cout << *man << std::endl;
    std::cout << *enemy << std::endl;
    man->attack(enemy);
    std::cout << *man << std::endl;
    std::cout << *enemy << std::endl;
    man->attack(enemy);
    std::cout << *man << std::endl;
    std::cout << *enemy << std::endl;
    delete enemy;
    delete man;
    delete bat;
}

void testFunc15(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc16(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
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
    if (!test1.empty())
        std::cout << "1 - " << test1 << " test" << std::endl;    
    if (!test2.empty()) 
        std::cout << "2 - " << test2 << " test" << std::endl;    
    if (!test3.empty()) 
        std::cout << "3 - " << test3 << " test" << std::endl;    
    if (!test4.empty()) 
        std::cout << "4 - " << test4 << " test" << std::endl;    
    if (!test5.empty()) 
        std::cout << "5 - " << test5 << " test" << std::endl;
    if (!test6.empty()) 
        std::cout << "6 - " << test6 << " test" << std::endl;    
    if (!test7.empty()) 
        std::cout << "7 - " << test7 << " test" << std::endl;    
    if (!test8.empty()) 
        std::cout << "8 - " << test8 << " test" << std::endl;    
    if (!test9.empty()) 
        std::cout << "9 - " << test9 << " test" << std::endl;    
    if (!test10.empty()) 
        std::cout << "10 - " << test10 << " test" << std::endl;    
    if (!test11.empty()) 
        std::cout << "11 - " << test11 << " test" << std::endl;    
    if (!test12.empty()) 
        std::cout << "12 - " << test12 << " test" << std::endl;    
    if (!test13.empty()) 
        std::cout << "13 - " << test13 << " test" << std::endl;    
    if (!test14.empty()) 
        std::cout << "14 - " << test14 << " test" << std::endl;    
    if (!test15.empty()) 
        std::cout << "15 - " << test15 << " test" << std::endl;    
    if (!test16.empty()) 
        std::cout << "16 - " << test16 << " test" << std::endl;
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
            testFunc1();
        else if (key.compare("2") == 0)
            testFunc2();
        else if (key.compare("3") == 0)
            testFunc3();
        else if (key.compare("4") == 0)
            testFunc4();
        else if (key.compare("5") == 0)
            testFunc5();
        else if (key.compare("6") == 0)
            testFunc6();
        else if (key.compare("7") == 0)
            testFunc7();
        else if (key.compare("8") == 0)
            testFunc8();
        else if (key.compare("9") == 0)
            testFunc9();
        else if (key.compare("10") == 0)
            testFunc10();
        else if (key.compare("11") == 0)
            testFunc11();
        else if (key.compare("12") == 0)
            testFunc12();
        else if (key.compare("13") == 0)
            testFunc13();
        else if (key.compare("14") == 0)
            testFunc14();
        else
             std::cout << "Wrong test key" << std::endl;    
    }
}

int main(void)
{   
    loopTests();
    return 0;
}
