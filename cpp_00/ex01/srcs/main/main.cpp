/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:20:30 by mac               #+#    #+#             */
/*   Updated: 2021/01/16 16:20:32 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../headers/Contact.hpp"
#include "../headers/crappy_io.hpp"
#include "../headers/Phonebook.hpp"
#include <iomanip>

int main(void)
{
    int         command;
    PhoneBook   phoneBook;
    int         c_choice;

    PrintProgStart();
    while (1)
    {
        command = GetCommand();
        if (command == ADD)
        {
            if (phoneBook.is_full())
                PrintNoSlots();
            else
                phoneBook.Add(GetContact());
        }
        else if (command == SEARCH)
        {
            PrintAvailableContacts(phoneBook.get_contacts(), phoneBook.contacts_count());
            c_choice = GetContactChoice();
            if (c_choice >= 0 && c_choice < phoneBook.contacts_count())
                PrintContact(phoneBook.Search(c_choice));
            else
                PrintWrongIndex();
        }
        else if (command == EXIT)
            exit (0);
    }
    return (0);
}
