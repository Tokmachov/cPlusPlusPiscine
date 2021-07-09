/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:27:01 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 17:27:02 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) {}
Brain::~Brain(void) {}

std::string Brain::identify(void) const {
    std::stringstream ss;
    std::string addr_str;
    
    ss << this;
    ss >> addr_str;
    return addr_str;
}