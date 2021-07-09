/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:04:00 by mac               #+#    #+#             */
/*   Updated: 2021/01/18 17:04:02 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheStack(void) {
    Pony pony("Bunny Cake");
    pony.makeSound();
    pony.walk("stack");
    pony.makeSound();
    pony.makeSound();
    pony.run("stack");
    pony.makeSound();
}

static void ponyOnTheHeap(void) {
    Pony *pony = new Pony("Bunny Cake");
    pony->makeSound();
    pony->walk("heap");
    pony->makeSound();
    pony->makeSound();
    pony->run("heap");
    pony->makeSound();
    delete pony;
}

int main(void) {
    ponyOnTheStack();
    std::cout << "\"ponyOnTheStack() \" returned" << std::endl;
    ponyOnTheHeap();
    std::cout << "\"ponyOnTheHead() \" returned" << std::endl;
    return (0);
}
