#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:

		std::vector<int>	_v;
		std::list<int>		_l;
		double				_vTime, _lTime;
		unsigned int		_vSize, _lSize;
	
	public:
	
		PmergeMe();
		PmergeMe(std::string sequence);
		~PmergeMe();
		PmergeMe(const PmergeMe &original);
		PmergeMe &operator=(const PmergeMe &other);

		void	sorting(std::string sequence);
		void	sort_vector(std::string sequence);
		void	sort_list(std::string sequence);

};

#endif