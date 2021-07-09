#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant()
	: Enemy(170, "Super Mutant")
{
	std::cout << "Super Mutant: Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Super Mutant: Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	if ( this != &rhs )
	{
		Enemy::operator= (rhs);
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, SuperMutant const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void SuperMutant::takeDamage(int dmg) {
	dmg -= 3;
	Enemy::takeDamage(dmg);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */