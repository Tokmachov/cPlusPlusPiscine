/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:49:19 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 12:57:00 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# define STORAGE_CAPACITY 4
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		virtual ~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );
		
		//methods
		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
		
		//Accessors
		int getMateriaCount() const;
		const AMateria *getMateria(int idx) const;
	
	private:
	AMateria *_storage[STORAGE_CAPACITY];
	int _materia_count;
	void _deep_cpy_mat_storage(AMateria* const *src, AMateria **dst, int src_len);
	void _delete_materia();
};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );

#endif /* *************************************************** MATERIASOURCE_H */