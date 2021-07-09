#include "Ghoul.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ghoul::Ghoul()
	: Enemy(50, "Ghoul")
{
	std::cout << "Ghoul: ooooOOoOoOoOoOoOoO!" << std::endl;
}

Ghoul::Ghoul( const Ghoul & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ghoul::~Ghoul()
{
	std::cout << "Ghoul: ssssssssssssssssss" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ghoul &				Ghoul::operator=( Ghoul const & rhs )
{
	if ( this != &rhs )
	{
		Enemy::operator= (rhs);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Ghoul::takeDamage(int dmg) {
	dmg -= 1;
	Enemy::takeDamage(dmg);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */