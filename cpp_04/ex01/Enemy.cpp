#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy(int hp, std::string const & type) 
	: _type(type), _hp(hp)
{
}

Enemy::Enemy()
{
}

Enemy::Enemy( const Enemy & src )
{
	this->_type = src._type;
	this->_hp = src._hp;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		this->_hp = rhs._hp;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Enemy const & i )
{
	std::cout << "Enemy: " << i.getType() << " has " << i.getHP() << " HP";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Enemy::takeDamage(int dmg) {
	if (dmg < 0)
		return ;
	_hp -= dmg;
	if (_hp < 0)
		_hp = 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Enemy::getType() const {
	return _type;
}
int Enemy::getHP() const {
	return _hp;
}

/* ************************************************************************** */