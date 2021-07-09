/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 20:18:30 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/08 16:47:14 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{

	public:

		Squad();
		Squad( Squad const & src );
		~Squad();

		Squad &		operator=( Squad const & rhs );
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int index) const;
		virtual int push(ISpaceMarine* unit);
	
	private:
		int _unit_count;	
		ISpaceMarine **_storage;
		int _capacity;

		void _shallow_cpy_storage(ISpaceMarine **src, ISpaceMarine **dst, int src_len);
		void _deep_copy_storage(ISpaceMarine **src, ISpaceMarine **dst, int src_len);
		bool _isAlreadyAdded(ISpaceMarine *unit);
		void _deleteStorage();
};

std::ostream &			operator<<( std::ostream & o, Squad const & i );

#endif /* *********************************************************** SQUAD_H */