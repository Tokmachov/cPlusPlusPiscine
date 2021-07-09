#include "SuperTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap() {
	std::cout << "SuperTrap default constructor is called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &src) {
	*this = src;
	std::cout << "Sepertrap copy constructor is called" << std::endl;
}
//
SuperTrap::SuperTrap(std::string name) : 
	ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(), NinjaTrap() {
		std::cout << "Sepertrap name constructor is called" << std::endl;
	}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap(void) {
	std::cout << "SuperTrap destructor is called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	if ( this != &rhs )
	{
		ClapTrap::operator=(rhs);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void SuperTrap::rangedAttack(std::string const &target) const {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target) const {
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::takeDamage(unsigned int amount) {
	ClapTrap::takeDamage(amount);
}

void SuperTrap::beRepaired(unsigned int amount) {
	ClapTrap::beRepaired(amount);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */