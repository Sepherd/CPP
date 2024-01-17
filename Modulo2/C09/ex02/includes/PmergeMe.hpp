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
		double				_vTime = 0, _lTime = 0;
		unsigned int		_vSize = 0, _lSize = 0;
	
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