/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:27:26 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 17:27:29 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
    this->_brain = Brain();
}
Human::~Human(void) {}

std::string Human::identify(void) const {
    return _brain.identify();
}

const Brain &Human::getBrain(void) const {
    const Brain &ref = _brain;
    return ref;
}