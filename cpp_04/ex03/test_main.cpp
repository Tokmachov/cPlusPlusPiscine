/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 18:17:51 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
#include <unistd.h>

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

std::string test1 = "Materiea XP increase by 10 + use print messages";
std::string test2 = "Test materia clone method";
std::string test3 = "Assignation test. Type must not be copied";
std::string test4 = "Add materia to character";
std::string test5 = "Charecter use method";
std::string test6 = "Character copy constructor";
std::string test7 = "Character assignation copy";
std::string test8 = "MateriaSource learn";
std::string test9 = "MateriaSource create";
std::string test10 = "Subject";
std::string test11 = "";
std::string test12 = "";
std::string test13 = "";
std::string test14 = "";
std::string test15 = "";
std::string test16 = "";

void testFunc1(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Cure m1;   
    Ice m2;
    ICharacter *c1 = new Character("JJ Alen");
    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;
    m1.use(*c1);
    m2.use(*c1);
    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;
    delete c1;
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AMateria *ice = new Ice();
    std::cout << "Ice address is: " << ice << std::endl;
    AMateria *ice_clone = ice->clone(); 
    std::cout << "Ice_clone address is: " << ice_clone << std::endl;
    std::cout << *ice_clone << std::endl;
    delete ice;
    delete ice_clone;
}

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    ICharacter *ch = new Character("John");
    cure->use(*ch);
    std::cout << "To" << std::endl;
    std::cout << *ice << std::endl;
    std::cout << "From" << std::endl;
    std::cout << *cure << std::endl;
    *ice = *cure;
    std::cout << "To" << std::endl;
    std::cout << *ice << std::endl;
    delete ch;
    delete ice;
    delete cure;
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    AMateria *ice1 = new Ice();
    AMateria *cure1 = new Cure();
    ICharacter *ch = new Character("JJ Yo");
    std::cout << *((Character*)ch) << std::endl;
    ch->equip(ice);
    std::cout << *((Character*)ch) << std::endl;
    ch->equip(cure);
    std::cout << *((Character*)ch) << std::endl;
    ch->equip(cure1);
    std::cout << *((Character*)ch) << std::endl;
    ch->equip(ice1);
    std::cout << *((Character*)ch) << std::endl;
    std::cout << "---try to equip materia when inventory is full" << std::endl;
    ch->equip(ice1);
    ch->equip(cure1);
    std::cout << *((Character*)ch) << std::endl;
    std::cout << "---Unequip materia---" << std::endl;
    std::cout << "---Unequip materia at 1 position" << std::endl;
    ch->unequip(1);
    std::cout << *((Character*)ch) << std::endl;
    std::cout << "---Unequip materia at 3 position" << std::endl;
    ch->unequip(3);
    std::cout << *((Character*)ch) << std::endl;
    std::cout << "---Unequip nonexisting materia" << std::endl;
    ch->unequip(1);
    std::cout << *((Character*)ch) << std::endl;
    ch->unequip(3);
    std::cout << *((Character*)ch) << std::endl;
    std::cout << "---Equip. 1 index position is vacant 2nd is occupied" << std::endl;
    ch->equip(ice);
    std::cout << *((Character*)ch) << std::endl;
    std::cout << "---Equip. 3 index position" << std::endl;
    ch->equip(ice);
    std::cout << *((Character*)ch) << std::endl;
    ch->unequip(1);
    ch->unequip(3);
    delete ch;
    delete ice1;
    delete cure;
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    AMateria *ice1 = new Ice();
    ICharacter *ch = new Character("JJ Yo");
    ch->equip(ice);
    ch->equip(cure);
    ch->equip(ice1);
    std::cout << "---Use existing materia---" << std::endl;
    ch->use(0, *ch); 
    std::cout << "---Use Not existing materia---" << std::endl;
    ch->use(3, *ch);
    delete ch;
}

void testFunc6(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    AMateria *ice1 = new Ice();
    AMateria *cure1 = new Cure();
    ICharacter *ch = new Character("JJ Yo");
    ch->equip(ice);
    ch->equip(cure);
    ch->equip(ice1);
    ch->equip(cure1);
    ch->unequip(1);
    std::cout << *((Character*)ch) << std::endl;
    Character ch1(*((Character*)ch));
    std::cout << "---Copied character---" << std::endl;
    std::cout << ch1 << std::endl;
    delete cure;
    delete ch;
}

void testFunc7(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    AMateria *ice1 = new Ice();
    AMateria *cure1 = new Cure();
    ICharacter *ch = new Character("JJ Yo");
    ch->equip(ice);
    ch->equip(cure);
    ch->equip(ice1);
    ch->equip(cure1);
    ch->unequip(1);
    std::cout << *((Character*)ch) << std::endl;
    Character ch1(*((Character*)ch));
    Character ch2 = Character();
    std::cout << "---Destination before copy---" << std::endl;
    std::cout << ch2 << std::endl;
    ch2 = ch1;
    std::cout << "---Destination after copy copy---" << std::endl;
    std::cout << ch2 << std::endl;
    delete cure;
    delete ch;
}

void testFunc8(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    IMateriaSource *source = new MateriaSource();
    std::cout << "---Learn materia---" << std::endl;
    source->learnMateria(new Ice());
    std::cout << *((MateriaSource*)source) << std::endl;
    std::cout << "---Learn materia---" << std::endl;
    source->learnMateria(new Cure());
    std::cout << *((MateriaSource*)source) << std::endl;
    std::cout << "---Learn materia---" << std::endl;
    source->learnMateria(new Ice());
    std::cout << *((MateriaSource*)source) << std::endl;
    std::cout << "---Learn materia---" << std::endl;
    source->learnMateria(new Cure());
    std::cout << *((MateriaSource*)source) << std::endl;
    std::cout << "---Learn materia when materia source is out of capacity---" << std::endl;
    AMateria *m = new Cure();
    source->learnMateria(m);
    std::cout << *((MateriaSource*)source) << std::endl;
    delete source;
    delete m;
}

void testFunc9(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    AMateria *ice1 = new Ice();
    AMateria *cure1 = new Cure();
    IMateriaSource *source = new MateriaSource();
    std::cout << "---Create materia with empty storage---" << std::endl;
    AMateria *created_with_empty_storage = source->createMateria("ice");
    std::cout << created_with_empty_storage << std::endl;
    source->learnMateria(ice);
    source->learnMateria(cure);
    source->learnMateria(ice1);
    source->learnMateria(cure1);
    std::cout << *((MateriaSource*)source) << std::endl;
    AMateria *ice_created = source->createMateria("ice");
    std::cout << "---Created materia---" << std::endl;
    std::cout << *ice_created << std::endl;
    delete ice_created;
    AMateria *cure_created = source->createMateria("cure");
    std::cout << "---Created materia---" << std::endl;
    std::cout << *cure_created << std::endl;
    delete cure_created;
    std::cout << "---Create unknown materia---" << std::endl;
    AMateria *unknown_created = source->createMateria("unknown");
    std::cout << unknown_created << std::endl;
    delete source;
}

void testFunc10(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = 0;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    std::cout << "---Compare output to---" << std::endl;
    std::cout << "* shoots an ice bolt at bob *" << std::endl;
    std::cout << "* heals bob's wounds *" << std::endl;
}

void testFunc11(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc12(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc13(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc14(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
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
            testFunc14();
        else if (key.compare("15") == 0)
            testFunc15();
        else
             std::cout << "Wrong test key" << std::endl;    
    }
}

int main(void)
{   
    loopTests();
    return 0;
}
