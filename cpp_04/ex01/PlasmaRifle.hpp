#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

	public:
		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle();

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );
		//methods
		//AWeapon pure virtual
		void attack() const;
	private:

};

// std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i );

#endif /* ***************************************************** PLASMARIFLE_H */