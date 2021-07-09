#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon(std::string const &name, int apcost, int damage) 
	: _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &src)
{
	_name = src._name;
	_apcost = src._apcost;
	_damage = src._damage;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
 
AWeapon &AWeapon::operator=(AWeapon const &rhs)
{
	if ( this != &rhs )
	{
		_name = rhs._name;
		_apcost = rhs._apcost;
		_damage = rhs._damage;
	}
	return *this;
}

// std::ostream &operator<<(std::ostream &o, AWeapon const &i)
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

std::string AWeapon::getName() const {
	return _name;
}
int AWeapon::getAPCost() const {
	return _apcost;
}
int AWeapon::getDamage() const {
	return _damage;
}

/* ************************************************************************** */