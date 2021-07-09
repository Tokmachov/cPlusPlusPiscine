/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:46:45 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/15 21:27:40 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <sys/time.h> //getRandomInt

void identify_from_reference( Base & p)
{
    try
    {
        A a = dynamic_cast<A&> (p);
        (void)a;
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        B b = dynamic_cast<B&> (p);
        (void)b;
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
    try
    {
        C c = dynamic_cast<C&> (p);
        (void)c;
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        (void)e;
    }
}

void identify_from_pointer(Base * p)
{
    
    if (dynamic_cast<A*> (p) != 0)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*> (p) != 0)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*> (p) != 0)
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown class" << std::endl;
}

static int getRandomInt(void)
{
    struct timeval t;
    gettimeofday(&t, NULL);
    return static_cast<int> (t.tv_usec);
}

Base * generate(void)
{
    int randInt;
    int object_id;
    
    randInt = getRandomInt();
    srand(randInt);
    object_id = rand() % 3;
    switch (object_id)
    {
        case 0: 
            std::cout << "A type generated" << std::endl;
            return new A();
        case 1: 
            std::cout << "B type generated" << std::endl;
            return new B();
        case 2: 
            std::cout << "C type generated" << std::endl;
            return new C();
        default: 
            std::cout << "A type generated" << std::endl;
            return new A();    
    }
}

int main(void)
{
    Base *b;
    
    b = generate();
    std::cout << "---identify by pointer---" << std::endl;
    identify_from_pointer(b);
    std::cout << "---identify by reference---" << std::endl;
    identify_from_reference(*b);
    delete b;
    return 0;
}