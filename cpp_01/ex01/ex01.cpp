/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 18:37:50 by mac               #+#    #+#             */
/*   Updated: 2021/01/18 18:37:52 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

void memoryLeak() {
    std::string	*panther = new std::string("String panther");
    
	std::cout << *panther << std::endl;
	delete panther;
}
