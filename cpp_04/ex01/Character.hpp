/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:47:17 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/04 12:51:41 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{

	public:

		Character(std::string const & name, const AWeapon & w);
		Character(std::string const & name);
		Character();
		Character( Character const & src );
		~Character();

		Character &		operator=( Character const & rhs );
		
		void recoverAP();
        void equip(AWeapon*);
        void attack(Enemy *enemy);
        std::string getName() const;
		int getApNum() const;	
		const AWeapon *getWeapon() const;
	private:
		std::string _name;
		int _ap_num;
		int _ap_max;
		const AWeapon *_weapon;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */