/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 19:22:06 by mac               #+#    #+#             */
/*   Updated: 2021/01/16 19:22:15 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "../headers/Contact.hpp"

class PhoneBook {
public:
    		PhoneBook(void);
    		~PhoneBook(void);
    void	Add(Contact contact);
	Contact	Search(int contact_index);
	Contact *get_contacts(void);
	int		is_full(void);
	int		contacts_count(void);
private:
    Contact contacts[8];
	int		c_count;
};

# endif
