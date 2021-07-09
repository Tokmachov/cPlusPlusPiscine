#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

	public:

		PowerFist();
		PowerFist( PowerFist const & src );
		~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );
		//methods
		void attack() const;
	private:

};

//std::ostream &			operator<<( std::ostream & o, PowerFist const & i );

#endif /* ******************************************************* POWERFIST_H */