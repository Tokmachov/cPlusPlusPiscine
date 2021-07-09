/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:03:52 by mac               #+#    #+#             */
/*   Updated: 2021/01/18 17:03:53 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PONY_H
# define PONY_H

#include <string>
#include <iostream>

class Pony {
public:
    Pony(std::string nm);
    ~Pony(void);
    
    void walk(std::string place) const;
    void run(std::string place) const;
    void makeSound(void) const;

private:
    std::string _nickname;
    std::string _sound;
};

#endif