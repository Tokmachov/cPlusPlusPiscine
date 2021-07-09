/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/21 17:53:31 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "MutantStack.hpp"
#include <deque>
#include <vector>
std::string test1 = "Subject";
std::string test2 = "Copy constructor";
std::string test3 = "Assignation";
std::string test4 = "";
std::string test5 = "";
std::string test6 = "";
std::string test7 = "";
std::string test8 = "";
std::string test9 = "";
std::string test10 = "";
std::string test11 = "";
std::string test12 = "";
std::string test13 = "";
std::string test14 = "";
std::string test15 = "";
std::string test16 = "";

void testFunc1(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    MutantStack<int> mstack;
    std::cout << "---Push 5, 17---" << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "Top element: " << mstack.top() << std::endl;
    std::cout << "---Remove one element from top---" << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "---Push 3, 5, 737---" << std::endl;
    mstack.push(3); 
    mstack.push(5); 
    mstack.push(737);
    std::cout << "Size: " << mstack.size() << std::endl;
    std::cout << "Top element: " << mstack.top() << std::endl;
    MutantStack<int>::iterator it_begin = mstack.begin(); 
    MutantStack<int>::iterator it_end = mstack.end();
    ++it_begin;
    --it_begin;
    while (it_begin != it_end) 
    {
        std::cout << *it_begin << std::endl;
        ++it_begin; 
    }
    std::stack<int> s(mstack);
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    MutantStack<std::string, std::vector<std::string> > m;
    m.push("We just spent $64,000 in that bar.");
    m.push("We're going to have to get jobs,");
    m.push("to cover up the fact that");
    m.push("we rob banks.");
    MutantStack<std::string, std::vector<std::string> >::iterator it;
    std::cout << "---source---" << std::endl;
    for (it = m.begin(); it < m.end(); it++)
        std::cout << *it << std::endl;
    
    MutantStack<std::string, std::vector<std::string> > m_copy(m);
    MutantStack<std::string, std::vector<std::string> >::iterator it1;
    std::cout << "---copy---" << std::endl;
    for (it1 = m_copy.begin(); it1 < m_copy.end(); it1++)
        std::cout << *it1 << std::endl;
}

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    MutantStack<std::string, std::vector<std::string> > m;  
    m.push("Yeah, now's good.");
    m.push("Before would've been better but...");
    m.push("before is over.");
    std::cout << "---source---" << std::endl;
    MutantStack<std::string, std::vector<std::string> >::iterator it;
    for (it = m.begin(); it < m.end(); it++)
        std::cout << *it << std::endl;
    
    MutantStack<std::string, std::vector<std::string> > m_copy;
    m_copy = m;
    MutantStack<std::string, std::vector<std::string> >::iterator it1;
    std::cout << "---copy---" << std::endl;
    for (it1 = m_copy.begin(); it1 < m_copy.end(); it1++)
        std::cout << *it1 << std::endl;
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc6(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc7(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc8(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc9(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
}

void testFunc10(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
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
