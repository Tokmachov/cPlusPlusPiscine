/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappy_io_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:52:55 by mac               #+#    #+#             */
/*   Updated: 2021/01/16 17:52:58 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/crappy_io.hpp"
#include <iomanip>
#include <sstream>

void PrintProgStart(void)
{
    std::cout << "Hi! This is crappy phonebook app." << std::endl;
    std::cout << "Use commands: \"ADD\", \"SEARCH\" or \"EXIT\" to operate app" << std::endl;
}

void	PrintNoSlots(void)
{
	std::cout << "Error: there are no contact slots currently avalable. " << std::endl;
	std::cout << "Please exit and start app again." << std::endl;
}

int GetCommand(void)
{
	std::string command;

	while (1)
	{
		std::cout << "type your command: ";
		std::cin >> command;
		if ((command.compare("ADD")) == 0)
			return (ADD);
		else if ((command.compare("SEARCH")) == 0)
			return (SEARCH);
    	else if ((command.compare("EXIT")) == 0)
			return (EXIT);
		else
			std::cout << "Command is incorrect. Please type in : \"ADD\", \"SEARCH\" or \"EXIT\"" << std::endl;
	}
	return (0);
}

Contact GetContact(void)
{
	Contact contact;
	std::string val;
	
	std::cout << "Enter your first name: ";
	std::cin >> val;
	contact.setFirstName(val);
	std::cout << "Enter your last name: ";
	std::cin >> val;
	contact.setLastName(val);
	std::cout << "Enter your nick name: ";
	std::cin >> val;
	contact.setNickname(val);
	std::cout << "Enter your login: ";
	std::cin >> val;
	contact.setLogin(val);
	std::cout << "Enter your postal address: ";
	std::cin >> val;
	contact.setPostalAddress(val);
	std::cout << "Enter your email address: ";
	std::cin >> val;
	contact.setEmailAddress(val);
	std::cout << "Enter your phone number: ";
	std::cin >> val;
	contact.setPhoneNumber(val);
	std::cout << "Enter your birthday date: ";
	std::cin >> val;
	contact.setBirthdayDate(val);
	std::cout << "Enter your favourite meal: ";
	std::cin >> val;
	contact.setFavouriteMeal(val);
	std::cout << "Enter your underwear color: ";
	std::cin >> val;
	contact.setUnderwearColor(val);
	std::cout << "Enter your darkest secret: ";
	std::cin >> val;
	contact.setDarkestSecret(val);
	return (contact);
}
//string (const string& str, size_t pos, size_t len = npos);
//string substr (size_t pos = 0, size_t len = npos) const;
//void push_back (char c);
static std::string FormatString(std::string str) {
	if (str.length() <= 10)
		return (str);
	std::string str_out = str.substr(0,9);
	str_out.push_back('.');
	return (str_out);
}

static void PrintOneContactPreview(int i, Contact c)
{
	std::cout << '|';
	std::cout << std::setw(FIELD_WIDTH) << std::right << i;
	std::cout << '|';
	std::cout << std::setw(FIELD_WIDTH) << std::right << FormatString(c.getFirstName());
	std::cout << '|';
	std::cout << std::setw(FIELD_WIDTH) << std::right << FormatString(c.getLastName());
	std::cout << '|';
	std::cout << std::setw(FIELD_WIDTH) << std::right << FormatString(c.getNickname());
	std::cout << '|';
	std::cout << std::endl;
}

static void PrintContactsHeader(void)
{
	std::cout << "|";
	std::cout << std::right << std::setw(FIELD_WIDTH) << "index";
	std::cout << "|";
	std::cout << std::setw(FIELD_WIDTH) << std::right << "first name";
	std::cout << "|";
	std::cout << std::setw(FIELD_WIDTH) << std::right << "last name";
	std::cout << "|";
	std::cout << std::setw(FIELD_WIDTH) << std::right << "nickname";
	std::cout << "|";
	std::cout << std::endl;
}

void	PrintAvailableContacts(Contact contacts[], int c_num)
{
	int i;

	PrintContactsHeader();
	i = 0;
	while (i < c_num)
	{
		PrintOneContactPreview(i, contacts[i]);	
		i++;
	}
}

int	GetContactChoice(void) {
	
	std::string input;
	int			index;
	
	std::cout << "Type in entry index: ";
	std::cin >> input;
	std::stringstream(input) >> index;
	return index;
}

void	PrintWrongIndex(void) {
	std::cout << "Index is out of range." << std::endl;
}

void	PrintContact(Contact c) {
	std::cout << "first name: ";
	std::cout << c.getFirstName() << std::endl;
	std::cout << "last name: ";
	std::cout << c.getLastName() << std::endl;
	std::cout << "nickname: ";
	std::cout << c.getNickname() << std::endl;
	std::cout << "login: ";
	std::cout << c.getLogin() << std::endl;
	std::cout << "postal address: ";
	std::cout << c.getPostalAddress() << std::endl;
	std::cout << "email address: ";
	std::cout << c.getEmailAddress() << std::endl;
	std::cout << "phone number: ";
	std::cout << c.getPhoneNumber() << std::endl;
	std::cout << "birthday date: ";
	std::cout << c.getBirthdayDate() << std::endl;
	std::cout << "favorite meal: ";
	std::cout << c.getFavouriteMeal() << std::endl;
	std::cout << "underwear color: ";
	std::cout << c.getUnderwearColor() << std::endl;
	std::cout << "darkest secret: ";
	std::cout << c.getDarkestSecret() << std::endl;
}
