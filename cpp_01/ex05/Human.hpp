/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:27:42 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 17:27:44 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CPP
#define HUMAN_CPP

#include "Brain.hpp"

class Human {

public:
	Human(void);
	~Human(void);

	std::string identify(void) const;
	const Brain &getBrain(void) const;

private:
	Brain _brain;
};

#endif 
