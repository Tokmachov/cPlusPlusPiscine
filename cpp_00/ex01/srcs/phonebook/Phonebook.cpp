/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 19:22:29 by mac               #+#    #+#             */
/*   Updated: 2021/01/16 19:22:30 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Phonebook.hpp"
#include "../headers/Contact.hpp"

PhoneBook::PhoneBook(void) : c_count(0) {
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

void    PhoneBook::Add(Contact c) {
    if (this->c_count >= 8)
        return ;
    this->contacts[c_count] = c;
    this->c_count += 1;
}

Contact PhoneBook::Search(int contact_index) {
    return this->contacts[contact_index];
}

int     PhoneBook::is_full(void) {
    if (this->c_count >= 8)
        return 1;
    return 0;
}

int     PhoneBook::contacts_count(void) {
    return this->c_count;
}

Contact *PhoneBook::get_contacts(void) {
    return this->contacts;
}
