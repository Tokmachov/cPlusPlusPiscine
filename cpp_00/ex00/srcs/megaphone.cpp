/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sjolynn@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:44:03 by mac               #+#    #+#             */
/*   Updated: 2021/01/15 14:44:04 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string.h>

static	void	print_arg_uppercase(char *arg)
{
    size_t	i;
	char	c;
	
	i = 0;
    while (i < std::strlen(arg))
    {
		c = toupper(arg[i]);
		std::cout << c;
		i++;
	}
}

static	void	print_args_uppercase(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		print_arg_uppercase(argv[i]);
		i++;
	}
}

int				main(int argc, char **argv)
{
	if (argc > 1)
	{
		print_args_uppercase(argc, argv);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}