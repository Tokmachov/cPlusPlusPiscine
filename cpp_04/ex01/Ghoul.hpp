#ifndef GHOUL_HPP
# define GHOUL_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class Ghoul : public Enemy
{

	public:
		
		Ghoul();
		Ghoul( Ghoul const & src );
		~Ghoul();

		Ghoul &		operator=( Ghoul const & rhs );

		//methods
        virtual void takeDamage(int dmg);
	private:

};


#endif /* ***************************************************** GHOUL_H */