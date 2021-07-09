/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:36:31 by mac               #+#    #+#             */
/*   Updated: 2021/01/16 16:36:35 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) {
    return ;
}

Contact::~Contact(void) {
    return ;
}

std::string Contact::getFirstName(void) {
    return this->first_name;
}
std::string Contact::getLastName(void) {
    return this->last_name;
}
std::string Contact::getNickname(void) {
    return this->nickname;
}
std::string Contact::getLogin(void) {
    return this->login;
}
std::string Contact::getPostalAddress(void) {
    return this->postal_address;
}
std::string Contact::getEmailAddress(void) {
    return this->email_address;
}
std::string Contact::getPhoneNumber(void) {
    return this->phone_number;
}
std::string Contact::getBirthdayDate(void) {
    return this->birthday_date;
}
std::string Contact::getFavouriteMeal(void) {
	return this->favorite_meal;
}
std::string Contact::getUnderwearColor(void) {
	return this->underwear_color;
}
std::string Contact::getDarkestSecret(void) {
	return this->darkest_secret;
}

void 		Contact::setFirstName(std::string v) {
    this->first_name = v;
}
void		Contact::setLastName(std::string v) {
	this->last_name = v;
}
void		Contact::setNickname(std::string v) {
	this->nickname = v;
}
void		Contact::setLogin(std::string v) {
	this->login = v;
}
void		Contact::setPostalAddress(std::string v) {
	this->postal_address = v;
}
void		Contact::setEmailAddress(std::string v) {
	this->email_address = v;
}
void		Contact::setPhoneNumber(std::string v) {
	this->phone_number = v;
}
void		Contact::setBirthdayDate(std::string v) {
	this->birthday_date = v;
}
void		Contact::setFavouriteMeal(std::string v) {
	this->favorite_meal = v;
}
void		Contact::setUnderwearColor(std::string v) {
	this->underwear_color = v;
}
void		Contact::setDarkestSecret(std::string v) {
	this->darkest_secret = v;
}
