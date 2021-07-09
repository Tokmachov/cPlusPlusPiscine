/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/10 11:19:57 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

std::string test1 = "Construct instance of Form class";
std::string test2 = "Grades range restrictions for form constructor";
std::string test3 = "Getters";
std::string test4 = "<< overload";
std::string test5 = "Form beSigned()";
std::string test6 = "Bureaucrat signForm(Form &f)";
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
    Form f("Lost pasport form", 10, 10);    
    std::cout << f << std::endl;
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    try
    {
        Form f("Lost pasport form", 0, 1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form f("Lost pasport form", 1, 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form f("Lost pasport form", 151, 1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form f("Lost pasport form", 150, 151);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Form f("Lost pasport form", 149, 2);
    std::cout << "getName() result: " << f.getName() << std::endl;
    std::cout << "getGradeToSign() result: " << f.getGradeToSign() << std::endl;
    std::cout << "getGradeToExecute() result: " << f.getGradeToExecute() << std::endl;
    std::cout << "getSignedStatus() result: " << f.getSignedStatus() << std::endl;
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Form f("Lost pasport form", 149, 2);
    std::cout << f << std::endl;
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Form f("Lost pasport form", 9, 2);
    Bureaucrat b("John", 10);
    try
    {
        std::cout << "Try to sign by Bureaucrat with lower grade" << std::endl;
        f.beSigned(b);
        std::cout << f << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    Form f1("Lost pasport form", 9, 2);
    Bureaucrat b1("John", 8);
    try
    {
        std::cout << "Try to sign by Bureaucrat with higher grade" << std::endl;
        f1.beSigned(b1);
        std::cout << f1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void testFunc6(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    
    std::cout << "Try to sign by Bureaucrat with lower grade" << std::endl;
    Form f("Lost pasport form", 9, 2);
    Bureaucrat b("John", 10);
    b.signForm(f);
    std::cout << f << std::endl;
    
    std::cout << "Try to sign by Bureaucrat with higher grade" << std::endl;
    Form f1("Lost pasport form", 9, 2);
    Bureaucrat b1("John", 8);
    b1.signForm(f1);
    std::cout << f1 << std::endl;
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
