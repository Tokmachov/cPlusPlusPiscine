/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 14:40:52 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "VacuumCleaner.hpp"

void sorcererConstructorTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    Sorcerer s("Jim Jefrey", "King of marshrooms");
}

void sorcererIntroduceTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    Sorcerer s("Jim Jefrey", "King of marshrooms");
    std::cout << s;
}

void victimConstructionAndDestructionTest() {
    std::cout << "---------------Test----------------------------" << std::endl;
    Victim v("Yellow eye");
}

void victimIntroduceTest(void) {
    std::cout << "---------------Test----------------------------" << std::endl;
    Victim v("Yellow eye");
    std::cout << v;
}
void victimGetpolymorphedTests() {
    std::cout << "---------------Test----------------------------" << std::endl;
    Victim v("Yellow eye");
    v.getPolymorphed();
}

void sorcererPolymorphTest() {
    std::cout << "---------------Test----------------------------" << std::endl;
    Sorcerer s("Jim Jefrey", "King of marshrooms");
    Victim v("Yellow eye");
    s.polymorph(v);
}

void subjectTests() {
    std::cout << "---------------Test----------------------------" << std::endl;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
}

void peonOutputsTest() 
{
    std::cout << "---------------Test----------------------------" << std::endl;
    Peon peon("Bob");
    peon.getPolymorphed();
    std::cout << peon << std::endl;
}

void victimOutputsTest()
{
    std::cout << "---------------Test----------------------------" << std::endl;
    Victim victim("Bob");
    victim.getPolymorphed();
    std::cout << victim << std::endl;
}

void printSubjectTestsOutput() {
    std::cout << "--------------Compare output to-----------------" << std::endl;
    std::cout << "Robert, the Magnificent, is born!" << std::endl;
    std::cout << "Some random victim called Jimmy just appeared!" << std::endl;
    std::cout << "Some random victim called Joe just appeared!" << std::endl;
    std::cout << "Zog zog." << std::endl;
    std::cout << "I am Robert, the Magnificent, and I like ponies!" << std::endl;
    std::cout << "I'm Jimmy and I like otters!" << std::endl;
    std::cout << "I'm Joe and I like otters!" << std::endl;
    std::cout << "Jimmy has been turned into a cute little sheep!" << std::endl;
    std::cout << "Joe has been turned into a pink pony!" << std::endl;
    std::cout << "Bleuark..." << std::endl;
    std::cout << "Victim Joe just died for no apparent reason!" << std::endl;
    std::cout << "Victim Jimmy just died for no apparent reason!" << std::endl;
    std::cout << "Robert, the Magnificent, is dead. Consequences will never be the same!" << std::endl;
    
}

void vacuumCleanerTest() {
    std::cout << "---------------Test----------------------------" << std::endl;
    std::cout << "--------Two level inheritance------------------" << std::endl;
    Victim v = VacuumCleaner("Humming metal cutie");
    VacuumCleaner vacuum("Roaring metal beast");
    Victim *v1 = &vacuum;
    v.getPolymorphed();
    v1->getPolymorphed();
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
    std::cout << "1 - Sorcerer construction and destruction" << std::endl;
    std::cout << "2 - Sorcerer introduce test" << std::endl;
    std::cout << "3 - Victim construction and destruction test" << std::endl;
    std::cout << "4 - Victim introduce test" << std::endl;
    std::cout << "5 - Victim getPolymorphed test" << std::endl;
    std::cout << "6 - Sorcerer polymorph() test" << std::endl;
    std::cout << "7 - Subject tests test" << std::endl;
    std::cout << "8 - VacuumCleaner tests" << std::endl;
    std::cout << "9 - Peon outputs tests" << std::endl;
    std::cout << "10 - Victim outputs tests" << std::endl;
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
            sorcererConstructorTest();
        else if (key.compare("2") == 0)
            sorcererIntroduceTest();
        else if (key.compare("3") == 0)
            victimConstructionAndDestructionTest();
        else if (key.compare("4") == 0)
            victimIntroduceTest();
        else if (key.compare("5") == 0)
            victimGetpolymorphedTests();
        else if (key.compare("6") == 0)
            sorcererPolymorphTest();
        else if (key.compare("7") == 0)
        {
            subjectTests();
            printSubjectTestsOutput();
        }
        else if (key.compare("8") == 0)
            vacuumCleanerTest();
        else if (key.compare("9") == 0)
            peonOutputsTest();
        else if (key.compare("10") == 0)
            victimOutputsTest();
        else
             std::cout << "Wrong test key" << std::endl;    
    }
}

int main(void)
{   
    loopTests();
    return 0;
}
