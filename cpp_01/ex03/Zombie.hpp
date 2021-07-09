/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 19:08:03 by mac               #+#    #+#             */
/*   Updated: 2021/01/18 19:08:04 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
public:
    Zombie(void);
    Zombie(std::string type, std::string name);
    ~Zombie(void);

    void announce(void) const;
    void setName(std::string name);
    void setType(std::string type);

private:
    std::string _name;
    std::string _type;
};

#endif
