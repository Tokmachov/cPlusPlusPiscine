#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:

		Enemy(int hp, std::string const & type);
		Enemy();
		Enemy( Enemy const & src );
		virtual ~Enemy();

		Enemy &		operator=( Enemy const & rhs );
		
		//functions
		std::string getType() const;
        int getHP() const;
		bool isDead() const;
		
		//methods
        virtual void takeDamage(int dmg);
	
	private:
		std::string _type;
		int _hp;
};

std::ostream &			operator<<( std::ostream & o, Enemy const & i );

#endif /* *********************************************************** ENEMY_H */