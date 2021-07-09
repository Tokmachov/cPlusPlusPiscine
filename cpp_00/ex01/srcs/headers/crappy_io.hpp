#ifndef CRAPPY_IO_CLASS_HPP
# define CRAPPY_IO_CLASS_HPP

# include <iostream>
# include <string>
# include "../headers/Contact.hpp"

# define ADD 1

# define SEARCH 2

# define EXIT 3

# define FIELD_WIDTH 10

void    PrintProgStart(void);

void	PrintNoSlots(void);

void	PrintAvailableContacts(Contact contacts[], int c_num);

void	PrintWrongIndex(void);

void	PrintContact(Contact c);

int     GetCommand(void);

Contact GetContact(void);

int	GetContactChoice(void);


#endif
