#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		explicit MutantStack(const Container& ctnr = Container());
		MutantStack( MutantStack const & src );
		MutantStack &		operator=( MutantStack const & rhs );
		~MutantStack();

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		//functions
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
	private:
};
#include "MutantStack.tpp"

#endif /* ***************************************************** MUTANTSTACK_H */