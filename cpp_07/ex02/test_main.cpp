/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:14:09 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/17 19:33:52 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Array.hpp"
#include "Student.hpp"

std::string test1 = "Create an empty array";
std::string test2 = "Create an array of n size";
std::string test3 = "Construction by copy";
std::string test4 = "Assignment";
std::string test5 = "Access throu [] with out of range index";
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
    std::cout << "---create empty array---" << std::endl;
    Array<int> empty_arr;
    std::cout << "Element count: " << empty_arr.size() << std::endl; 
}

void testFunc2(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    std::cout << "---create int array of n size---" << std::endl;
    Array<int> arr(10);
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << "Element: " << arr[i] << std::endl;
    }
}

void testFunc3(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Array<std::string> arr(5);
    arr[0] = "Shark: Do something know before he deletes the";
    arr[1] = "Fitz: I am. I did.";
    arr[1] = "Shark: What did you do?";
    arr[2] = "Fitz: (interrupting Shark) It's already done.";
    arr[3] = "Shark: What did you do?";
    arr[4] = "Fitz: I helped you.";
    Array<std::string> arr_copy(arr);
    
    std::cout << "---Print src---" << std::endl;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << "Element: " << arr[i] << std::endl;
    }
    std::cout << "---Print copy---" << std::endl;
    for (unsigned int i = 0; i < arr_copy.size(); i++)
    {
        std::cout << "Element: " << arr_copy[i] << std::endl;
    }
    arr[0] = "--------------------------------------";
    arr[1] = "--------------------------------------";
    arr[2] = "--------------------------------------";
    arr[3] = "--------------------------------------";
    arr[4] = "--------------------------------------";
    std::cout << "---Print changed src ---" << std::endl;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << "Element: " << arr[i] << std::endl;
    }
    std::cout << "---Print copy ---" << std::endl;
    for (unsigned int i = 0; i < arr_copy.size(); i++)
    {
        std::cout << "Element: " << arr_copy[i] << std::endl;
    }
}

void testFunc4(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Array<std::string> arr(5);
    arr[0] = "Shark: Do something know before he deletes the";
    arr[1] = "Fitz: I am. I did.";
    arr[1] = "Shark: What did you do?";
    arr[2] = "Fitz: (interrupting Shark) It's already done.";
    arr[3] = "Shark: What did you do?";
    arr[4] = "Fitz: I helped you.";
    Array<std::string> arr_copy;
    arr_copy = arr;
    std::cout << "---Print src---" << std::endl;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << "Element: " << arr[i] << std::endl;
    }
    std::cout << "---Print dest---" << std::endl;
    for (unsigned int i = 0; i < arr_copy.size(); i++)
    {
        std::cout << "Element: " << arr_copy[i] << std::endl;
    }
    arr[0] = "--------------------------------------";
    arr[1] = "--------------------------------------";
    arr[2] = "--------------------------------------";
    arr[3] = "--------------------------------------";
    arr[4] = "--------------------------------------";
    std::cout << "---Print changed src ---" << std::endl;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        std::cout << "Element: " << arr[i] << std::endl;
    }
    std::cout << "---Print dest---" << std::endl;
    for (unsigned int i = 0; i < arr_copy.size(); i++)
    {
        std::cout << "Element: " << arr_copy[i] << std::endl;
    }
}

void testFunc5(void) {
    std::cout << "----Test-------------------------------------"  << std::endl;
    Array<Student> array(3);
    array[0] = Student("John");
    array[1] = Student("Alex");
    array[2] = Student("Jake");
    std::cout << "---Access with correct index---" << std::endl;
    try
    {
        std::cout << array[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---Access with correct index---" << std::endl;
    try
    {
        std::cout << array[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "---Access with correct index---" << std::endl;
    try
    {
        std::cout << array[-1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
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
