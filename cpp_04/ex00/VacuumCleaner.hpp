#ifndef VACUUMCLEANER_HPP
# define VACUUMCLEANER_HPP

# include <iostream>
# include <string>
# include "Peon.hpp"

class VacuumCleaner : public Peon
{

	public:

		VacuumCleaner(std::string name);
		VacuumCleaner();
		VacuumCleaner( VacuumCleaner const & src );
		~VacuumCleaner();

		VacuumCleaner &		operator=( VacuumCleaner const & rhs );
		virtual void getPolymorphed() const;
	private:

};

#endif /* *************************************************** VACUUMCLEANER_H */