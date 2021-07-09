/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:45:51 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/14 18:42:44 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTION_HPP
# define CONVERTION_HPP

# define CHAR_STR 1
# define INT_STR 2
# define FLOAT_STR 3
# define DOUBLE_STR 4
# define ERROR_STR 5
# include <string>

char getType(std::string str);

void printDouble(double d, bool is_possible_to_print);

void printFloat(float f, bool is_possible_to_print);

void printInt(int i, bool is_possible_to_print);

void printChar(char literal, bool is_printable);

void printCharacterConversions(std::string str);

void printIntConvertions(std::string str);

void printFloatConvertions(std::string s);

void printDoubleConvertions(std::string s);

int atoi_overflow(std::string s, bool *is_overflow);

#endif