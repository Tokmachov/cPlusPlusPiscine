/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 21:22:10 by sjolynn           #+#    #+#             */
/*   Updated: 2021/01/20 21:22:13 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

public:
    Weapon(std::string type);
    ~Weapon(void);

    std::string const &getType(void) const;
    void setType(std::string type);

private:
    std::string _type;
};

#endif
