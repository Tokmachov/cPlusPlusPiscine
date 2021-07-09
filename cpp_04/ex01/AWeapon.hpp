#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon();
		AWeapon( AWeapon const & src );
		virtual ~AWeapon();

		AWeapon &		operator=( AWeapon const & rhs );

		//functions
		std::string getName() const; //add virtual
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
	
	private:
		std::string _name;
		int _apcost;
		int _damage;
};

//std::ostream &			operator<<( std::ostream & o, AWeapon const & i );

#endif /* ********************************************************* AWEAPON_H */