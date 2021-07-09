#ifndef INTCONTAINER_HPP
# define INTCONTAINER_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>

class IntContainer
{

	public:

		IntContainer();
		IntContainer(unsigned int n);
		IntContainer( IntContainer const & src );
		virtual ~IntContainer();

		//functions
		IntContainer &		operator=( IntContainer const & rhs );
		void addNumber(int num);
		template <typename InputIterator>
		void addNumber(InputIterator begin, InputIterator end)
		{
			int input_size;

			input_size = std::distance(begin, end);
			if (input_size > _available_size())
				throw RangeCantBeAdded();
			_storage.insert(_storage.end(), begin, end);
		}
		int longestSpan();
		int shortestSpan();
		//Assessors
		std::vector<int> &getStorage();
	private:
		//functions
		int _available_size(void) const;
		//attributes
		std::vector<int> _storage;
		size_t _max_size;
	//exception
	class StorageIsFull: public std::exception
	{
		virtual const char* what() const throw();
	};
	class NotEnoughElementsToFindSpan: public std::exception
	{
		virtual const char* what() const throw();
	};
	class RangeCantBeAdded: public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, IntContainer &c);

#endif /* **************************************************** INTCONTAINER_H */