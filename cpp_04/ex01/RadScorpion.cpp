#include "RadScorpion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion()
	: Enemy(80, "RadScorpion")
{
	std::cout << "Rad scorpion: * click click click *" << std::endl;
	
}

RadScorpion::RadScorpion( const RadScorpion & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion()
{
	std::cout << "Rad scorpion: * SPROTCH *" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RadScorpion &				RadScorpion::operator=( RadScorpion const & rhs )
{
	if ( this != &rhs )
	{
		Enemy::operator= (rhs);
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, RadScorpion const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */