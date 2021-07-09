/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 12:47:47 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/06 18:12:52 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
# define STORAGE_CAPACITY 4
# define NO_VACANT_INDEX -1
class Character : public ICharacter
{

	public:

		Character(std::string name);
		Character();
		Character( Character const & src );
		virtual ~Character();

		Character &		operator=( Character const & rhs );

		//methods
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		//Accessors
		virtual std::string const & getName() const;
		const AMateria *getMateria(int index) const;
	
	private:
		AMateria *_storage[STORAGE_CAPACITY];
		std::string _name;

		void _set_all_materias_to_null();
		void _deep_cpy_mat_storage(AMateria* const *src, AMateria **dst);
		void _delete_storage();
		int _vacant_storage_index() const;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */