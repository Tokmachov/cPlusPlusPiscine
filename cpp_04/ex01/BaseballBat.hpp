#ifndef BASEBALLBAT_HPP
# define BASEBALLBAT_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class BaseballBat : public AWeapon
{

	public:
		BaseballBat();
		BaseballBat( BaseballBat const & src );
		~BaseballBat();

		BaseballBat &		operator=( BaseballBat const & rhs );
		//methods
		//AWeapon pure virtual
		void attack() const;
	private:

};

// std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i );

#endif /* ***************************************************** PLASMARIFLE_H */