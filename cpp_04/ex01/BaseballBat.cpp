#include "BaseballBat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BaseballBat::BaseballBat() : AWeapon("Baseball bat", 10, 30)
{
}

BaseballBat::BaseballBat( const BaseballBat & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BaseballBat::~BaseballBat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BaseballBat &				BaseballBat::operator=( BaseballBat const & rhs )
{
	if ( this != &rhs )
	{
		AWeapon::operator= (rhs);
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
void BaseballBat::attack() const {
	std::cout << "* Schschshcsh bam! *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */