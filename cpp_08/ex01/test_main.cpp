/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/20 12:34:07 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "IntContainer.hpp"

std::string test1 = "Min/Max span for 5 elements";
std::string test2 = "Error check: addNumber";
std::string test3 = "Error check: Find span for container of copacity 0";
std::string test4 = "Error check: Find span for container of copacity 1";
std::string test5 = "Add elements thru iter range 1";
std::string test6 = "Add elements thru iter range 2";
std::string test7 = "Add elements thru iter range. Correct input size";
std::string test8 = "Add elements thru iter and find spans";
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
    IntContainer c(5);   
    c.addNumber(1);
    c.addNumber(3);
    c.addNumber(10);
    c.addNumber(30);
    c.addNumber(31);
    
    std::cout << c << std::endl;
    try
    {
        std::cout << "Max span: " << c.longestSpan() << std::endl;
        std::cout << "Min span: " << c.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    std::cout << "---Add 1 element to 0 sized container---" << std::endl;
    
    IntContainer c(0);
    try
    {
        c.addNumber(1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---Add 1 element to full 3 element container---" << std::endl;
    IntContainer c1(3);
    try
    {
        c.addNumber(1);
        c.addNumber(2);
        c.addNumber(3);
        c.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    IntContainer c1(0);
    try
    {
        c1.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        c1.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    IntContainer c1(1);
    try
    {
        c1.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        c1.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int arr[3] = {1, 2, 3};
    IntContainer c(0);
    try
    {
        c.addNumber(arr, arr + 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFunc6(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int arr[3] = {1, 2, 3};
    IntContainer c(1);
    try
    {
        c.addNumber(arr, arr + 3);
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFunc7(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int arr[] = {9, 8, 7, 6, 5, 4, 5, 6, 7, 8, 8, 9};
    IntContainer c(14);
    c.addNumber(1);
    c.addNumber(2);
    try
    {
        c.addNumber(arr, arr + 12);
        std::cout << c << std::endl;    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void testFunc8(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int size = 10000;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    IntContainer c(size);
    c.addNumber(arr, arr + size);
    std::cout << "Longest span: " << c.longestSpan() << std::endl;
    std::cout << "Shortest span: " << c.shortestSpan() << std::endl;
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
