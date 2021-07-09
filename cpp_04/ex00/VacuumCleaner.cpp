#include "VacuumCleaner.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
VacuumCleaner::VacuumCleaner(std::string name) : Peon(name) 
{
	std::cout << getName() << " was assembled" << std::endl;
}

VacuumCleaner::VacuumCleaner() : Peon("no name")
{
}

VacuumCleaner::VacuumCleaner( const VacuumCleaner & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

VacuumCleaner::~VacuumCleaner()
{
	std::cout << getName() << " succed in a sock and suffocated" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

VacuumCleaner &				VacuumCleaner::operator=( VacuumCleaner const & rhs )
{
	if ( this != &rhs )
	{
		Victim::operator= (rhs);
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void VacuumCleaner::getPolymorphed() const {
	std::cout << getName() << " turned into shoe covered in jam" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */