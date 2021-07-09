/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 17:38:55 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <string.h>
#include "templates.hpp"
#include <iostream>
#include "CustomTestClass.hpp"
#include <iomanip>
#include "Awsome.hpp"

std::string test1 = "SWAP ints test";
std::string test2 = "SWAP floats test";
std::string test3 = "SWAP custom class objects test";
std::string test4 = "MIN ints test";
std::string test5 = "MIN chars test (equal chars)";
std::string test6 = "MIN custom class test";
std::string test7 = "MAX ints test";
std::string test8 = "MAX floats test;";
std::string test9 = "MAX custom classes test";
std::string test10 = "subj tests";
std::string test11 = "SWAP Awsome";
std::string test12 = "Min Awesome";
std::string test13 = "Max Awesome";
std::string test14 = "";
std::string test15 = "";
std::string test16 = "";

void testFunc1(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int lhs = 5;
    int rhs = 10;    
    std::cout << "before lhs: " << lhs << std::endl;
    std::cout << "before rhs: " << rhs << std::endl;
    swap<int>(lhs, rhs);
    std::cout << "after lhs: " << lhs << std::endl;
    std::cout << "after rhs: " << rhs << std::endl;
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    float lhs = 5;
    float rhs = 10;    
    std::cout << "before lhs: " << lhs << std::endl;
    std::cout << "before rhs: " << rhs << std::endl;
    swap<float>(lhs, rhs);
    std::cout << "after lhs: " << lhs << std::endl;
    std::cout << "after rhs: " << rhs << std::endl;
}

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    CustomTestClass lhs;
    CustomTestClass rhs;    
    
    lhs._value = 111;
    rhs._value = 222;
    std::cout << "before lhs: " << lhs._value << std::endl;
    std::cout << "before rhs: " << rhs._value << std::endl;
    swap<CustomTestClass>(lhs, rhs);
    std::cout << "after lhs: " << lhs._value << std::endl;
    std::cout << "after rhs: " << rhs._value << std::endl;
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int lhs = 5;
    int rhs = 10;    
    int result;
    std::cout << "lhs: " << lhs << std::endl;
    std::cout << "rhs: " << rhs << std::endl;
    result = min<int>(lhs, rhs);
    std::cout << "result : " << lhs << std::endl;
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    char lhs = 'A';
    char rhs = 'A';    
    int result;
    std::cout << "lhs: " << lhs << std::endl;
    std::cout << "rhs: " << rhs << std::endl;
    result = min<char>(lhs, rhs);
    std::cout << "result : " << lhs << std::endl;
}

void testFunc6(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    CustomTestClass lhs;
    CustomTestClass rhs;    
    
    
    lhs._value = 222;
    rhs._value = 111;
    std::cout << "lhs value: " << lhs._value << std::endl;
    std::cout << "rhs value: " << rhs._value << std::endl;
    CustomTestClass &result = min<CustomTestClass>(lhs, rhs);
    std::cout << "Result: " << result._value << std::endl;
}

void testFunc7(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int lhs = 5;
    int rhs = 10;    
    int result;
    std::cout << "lhs: " << lhs << std::endl;
    std::cout << "rhs: " << rhs << std::endl;
    result = max<int>(lhs, rhs);
    std::cout << "result : " << result << std::endl;
}

void testFunc8(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    float lhs = 2000.007;
    float rhs = 2000.0007;    
    float result;
    std::cout << "lhs: " << std::fixed << lhs << std::endl;
    std::cout << "rhs: " << std::fixed << rhs << std::endl;
    result = max<float>(lhs, rhs);
    std::cout << "result : " << std::fixed << result << std::endl;
}

void testFunc9(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    CustomTestClass lhs;
    CustomTestClass rhs;    
    
    
    lhs._value = 222;
    rhs._value = 111;
    std::cout << "lhs value: " << lhs._value << std::endl;
    std::cout << "rhs value: " << rhs._value << std::endl;
    CustomTestClass &result = max<CustomTestClass>(lhs, rhs);
    std::cout << "Result: " << result._value << std::endl;
}

void testFunc10(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    std::cout << "---Compare output to---" << std::endl;
    std::cout << "a = 3, b = 2" << std::endl;
    std::cout << "min(a, b) = 2" << std::endl;
    std::cout << "max(a, b) = 3" << std::endl;
    std::cout << "c = chaine2, d = chaine1" << std::endl;
    std::cout << "min(c, d) = chaine1" << std::endl;
    std::cout << "max(c, d) = chaine2" << std::endl;
}

void testFunc11(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Awesome obj1(1);    
    Awesome obj2(2);
    Awesome result;
    std::cout << "obj1: " << obj1.getValue() << std::endl;
    std::cout << "obj2: " << obj2.getValue() << std::endl;
    swap(obj1, obj2);
    std::cout << "obj1: " << obj1.getValue() << std::endl;
    std::cout << "obj2: " << obj2.getValue() << std::endl;
}

void testFunc12(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Awesome obj1(1);    
    Awesome obj2(2);
    Awesome result;
    std::cout << "obj1: " << obj1.getValue() << std::endl;
    std::cout << "obj2: " << obj2.getValue() << std::endl;
    result = min(obj1, obj2);
    std::cout << "Min obj = " << result.getValue() << std::endl;
}

void testFunc13(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Awesome obj1(999);    
    Awesome obj2(10000);
    Awesome result;
    std::cout << "obj1: " << obj1.getValue() << std::endl;
    std::cout << "obj2: " << obj2.getValue() << std::endl;
    result = max(obj1, obj2);
    std::cout << "Max obj = " << result.getValue() << std::endl;
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
