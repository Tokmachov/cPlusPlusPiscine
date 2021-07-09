/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 17:22:29 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <string.h>
# include <unistd.h>
# include "TacticalMarine.hpp"
# include "ISpaceMarine.hpp"
# include "AssaultTerminator.hpp"
# include "Squad.hpp"
# include "ISquad.hpp"
std::string test1 = "Tactical marine construction and destruction messeges";
std::string test2 = "Tactical marine battleCry, ranged attack, melee attack";
std::string test3 = "AssaultTerminator construction and destruction messeges";
std::string test4 = "AssaultTerminator battleCry, ranged attack, melee attack";
std::string test5 = "Squad getCount/push";
std::string test6 = "Squad getUnit";
std::string test7 = "Squad destructor";
std::string test8 = "Squad copy constructor";
std::string test9 = "Squad assignment";
std::string test10 = "Tests from main";
std::string test11 = "";
std::string test12 = "";
std::string test13 = "";
std::string test14 = "";
std::string test15 = "";
std::string test16 = "";

void testFunc1(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    TacticalMarine *tm1 = new TacticalMarine();
    ISpaceMarine *spaceMarine;
    spaceMarine = tm1;
    delete tm1;
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    TacticalMarine tm;
    tm.battleCry();
    tm.rangedAttack();
    tm.meleeAttack();
}

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AssaultTerminator *tm1 = new AssaultTerminator();
    ISpaceMarine *spaceMarine;
    spaceMarine = tm1;
    delete tm1;
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    AssaultTerminator tm;
    tm.battleCry();
    tm.rangedAttack();
    tm.meleeAttack();
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    ISpaceMarine *u1 = new TacticalMarine();
    Squad *squad = new Squad();
    std::cout << "---push 1 unit--" << std::endl;
    int push_res = squad->push(u1);
    std::cout << "push result = " << push_res << std::endl;
    std::cout << "getCount result = " << squad->getCount() << std::endl;
    std::cout << "Unit addres = " << u1 << std::endl;
    std::cout << *squad << std::endl;
     std::cout << "---push already pushed unit--" << std::endl;
    std::cout << "Unit addres = " << u1 << std::endl;
    push_res = squad->push(u1);
    std::cout << "push result = " << push_res << std::endl;
    std::cout << "getCount result = " << squad->getCount() << std::endl;
    std::cout << *squad << std::endl;
    std::cout << "---push 2 units and exceed capacity(2)--" << std::endl;
    ISpaceMarine *u2 = new AssaultTerminator();
    ISpaceMarine *u3 = new TacticalMarine();
    std::cout << "Unit addres = " << u2 << std::endl;
    std::cout << "Unit addres = " << u3 << std::endl;
    push_res = squad->push(u2);
    push_res = squad->push(u3);
    std::cout << "push result = " << push_res << std::endl;
    std::cout << "getCount result = " << squad->getCount() << std::endl;
    std::cout << *squad << std::endl;
    std::cout << "---push 0---" << std::endl;
    push_res = squad->push(0);
    std::cout << "push result = " << push_res << std::endl;
    std::cout << "getCount result = " << squad->getCount() << std::endl;
    std::cout << *squad << std::endl;
    delete squad;
}

void testFunc6(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    std::cout << "---Index < 0---" << std::endl;
    ISpaceMarine *u1 = new TacticalMarine();    
    std::cout << "Created unit address: " << u1 << std::endl;
    Squad *s = new Squad();
    s->push(u1);
    std::cout << *s << std::endl;
    ISpaceMarine *u_out = s->getUnit(-1);
    std::cout << "Received unit address is " << u_out << std::endl;
    
    std::cout << "---Index > _units_count---" << std::endl;
    u_out = s->getUnit(10);
    std::cout << "Received unit address is " << u_out << std::endl;
    std::cout << "---Correct index---" << std::endl;
    u_out = s->getUnit(0); 
    std::cout << "Received unit address is " << u_out << std::endl;
    delete s;
}

void testFunc7(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    ISpaceMarine *u1 = new AssaultTerminator();
    ISpaceMarine *u2 = new TacticalMarine();
    ISpaceMarine *u3 = new AssaultTerminator();
    ISquad *s = new Squad();
    s->push(u1);
    s->push(u2);
    s->push(u3);
    delete s;
}

void testFunc8(void) {
    
    std::cout << "----Test-------------------------------------"  << std::endl;
    std::cout << "---Create marines and source squad---" << std::endl;
    Squad *squad = new Squad();
    ISpaceMarine *u1 = new TacticalMarine();
    ISpaceMarine *u2 = new TacticalMarine();
    ISpaceMarine *u3 = new TacticalMarine();
    ISpaceMarine *u4 = new TacticalMarine();
    squad->push(u1);
    squad->push(u2);
    squad->push(u3);
    squad->push(u4);
    std::cout << *squad << std::endl;
    Squad squad_copy = Squad(*squad);
    std::cout << "---Print squad_copy---" << std::endl;
    std::cout << squad_copy << std::endl;
    std::cout << "---Delete marines and squad source---" << std::endl;
    delete squad;
    std::cout << "---Print squad copy---" << std::endl;
    std::cout << squad_copy << std::endl;
}

void testFunc9(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    ISpaceMarine *u1 = new TacticalMarine();
    ISpaceMarine *u2 = new TacticalMarine();
    ISpaceMarine *u3 = new TacticalMarine();
    Squad *rhs = new Squad();
    rhs->push(u1);
    rhs->push(u2);
    rhs->push(u3);

    ISpaceMarine *u4 = new AssaultTerminator();
    ISpaceMarine *u5 = new AssaultTerminator();
    ISpaceMarine *u6 = new AssaultTerminator();
    Squad *lhs = new Squad();
    lhs->push(u4);
    lhs->push(u5);
    lhs->push(u6);
    
    std::cout << "---Print rhs squad---" << std::endl;
    std::cout << *rhs << std::endl;
    std::cout << "---Print lhs squad---" << std::endl;
    std::cout << *lhs << std::endl;
    std::cout << "--Assignation--" << std::endl;
    *lhs = *rhs;
    std::cout << "---Print lhs squad after assignment---" << std::endl;
    std::cout << *lhs << std::endl;
    std::cout << "---Delete rhs---" << std::endl;
    delete rhs;
    std::cout << "---Delete lhs---" << std::endl;
    delete lhs;
}


void testFunc10(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc; 
    std::cout << "---Compare output to---" << std::endl;
    std::cout << "Tactical Marine ready for battle!" << std::endl;
    std::cout << "* teleports from space *" << std::endl;
    std::cout << "For the holy PLOT!" << std::endl;
    std::cout << "* attacks with a bolter *" << std::endl;
    std::cout << "* attacks with a chainsword *" << std::endl;
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
    std::cout << "* does nothing *" << std::endl;
    std::cout << "* attacks with chainfists *" << std::endl;
    std::cout << "Aaargh..." << std::endl;
    std::cout << "I'll be back..." << std::endl;   
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
