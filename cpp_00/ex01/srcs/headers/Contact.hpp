/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:36:44 by mac               #+#    #+#             */
/*   Updated: 2021/01/16 16:36:46 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

class Contact {
public:
	Contact(void);
	~Contact(void);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getLogin(void);
	std::string getPostalAddress(void);
	std::string getEmailAddress(void);
	std::string getPhoneNumber(void);
	std::string getBirthdayDate(void);
	std::string getFavouriteMeal(void);
	std::string getUnderwearColor(void);
	std::string getDarkestSecret(void);	
	
	void		setFirstName(std::string v);
	void		setLastName(std::string v);
	void		setNickname(std::string v);
	void		setLogin(std::string v);
	void		setPostalAddress(std::string v);
	void		setEmailAddress(std::string v);
	void		setPhoneNumber(std::string v);
	void		setBirthdayDate(std::string v);
	void		setFavouriteMeal(std::string v);
	void		setUnderwearColor(std::string v);
	void		setDarkestSecret(std::string v);

private:
	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
};

#endif
