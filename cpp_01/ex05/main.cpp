/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:27:53 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 17:27:55 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

int main() {
    Human bob;
    
	std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}