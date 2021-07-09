/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjolynn <sjolynn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 19:15:47 by sjolynn           #+#    #+#             */
/*   Updated: 2021/02/16 19:27:08 by sjolynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUSTOMCLASS_HPP
# define CUSTOMCLASS_HPP

# include <iostream>
# include <string>

class CustomClass
{
	public:
		CustomClass(int h, int m, int s);
		int hour;
		int minute;
		int second;
		CustomClass();
};

std::ostream &operator<<(std::ostream &o, const CustomClass &i);

#endif /* ***************************************************** CUSTOMCLASS_H */