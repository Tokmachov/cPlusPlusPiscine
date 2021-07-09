#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

	public:

	SuperTrap(void);
	SuperTrap(SuperTrap const &src);
	SuperTrap(std::string name);
	~SuperTrap(void);

	SuperTrap &operator=(SuperTrap const & rhs);

	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const; 
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	private:

};

#endif /* ******************************************************* SUPERTRAP_H */