#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::string	sequence = "10 4 6 2 21";
	sorting(sequence);
}

PmergeMe::PmergeMe(std::string sequence)
{
	sorting(sequence);
}

PmergeMe::~PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe &original)
{
	*this = original;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		this->_v = other._v;
		this->_l = other._l;
		this->_vTime = other._vTime;
		this->_lTime = other._lTime;
		this->_vSize = other._vSize;
		this->_lSize = other._lSize;
	}
	return (*this);
}

void	vectorInsertSort(std::vector<int> &v, int left, int right)
{
	for (int i = left + 1; i <= right; ++i)
	{
		int key = v[i];
		int j = i - 1;

		while (j >= left && v[j] > key)
		{
			v[j + 1] = v[j];
			--j;
		}
		v[j + 1] = key;
	}
}

void	vectorMergeSort(std::vector<int> &v, int left, int middle, int right)
{
	int n1 = middle - left + 1;
	int n2 = right - middle;

	std::vector<int> L(n1), R(n2);

	for (int i = 0; i < n1; i++)
		L[i] = v[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = v[middle + 1 + j];
	
	int i = 0, j = 0, k = left;
	while (i < n1 && j << n2)
	{
		if (L[i] <= R[j])
		{
			v[k] = L[i];
			i++;
		}
		else
		{
			v[k] = R[j];
			j++;
		}
		++k;
	}
	while (i < n1)
	{
		v[k] = L[i];
		k++;
		i++;
	}
	while (j < n2)
	{
		v[k] = R[j];
		k++;
		j++;
	}
}

void	vectorMergeInsertSort(std::vector<int> &v, int left, int right)
{
	if (left < right)
	{
		if (right - left <= 10)
			vectorInsertSort(v, left, right);
		else
		{
			int middle = left + (right - left) / 2;
			vectorMergeInsertSort(v, left, middle);
			vectorMergeInsertSort(v, middle + 1, right);
			vectorMergeSort(v, left, middle, right);
		}
	}
}

void	PmergeMe::sort_vector(std::string sequence)
{
	std::istringstream	iss(sequence);
	int					num;

	clock_t	time = clock();
	while (iss >> num)
	{
		_v.push_back(num);
		_vSize++;
	}
	vectorInsertSort(_v, 0, _v.size() - 1);
	time = clock() - time;
	_vTime = ((double)time)/CLOCKS_PER_SEC;
}

void	listInsertSort(std::list<int> &l)
{
	for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		std::list<int>::iterator it2 = it;
		while (it2 != l.begin() && *it2 < *std::prev(it2))
			std::iter_swap(it2, std::next(it2));
	}

}

std::list<int>	listMergeSort(std::list<int> &left, std::list<int> &right)
{
	std::list<int> result;
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(result));
	std::back_inserter(result);
	return (result);
}

std::list<int>	listMergeInsertSort(std::list<int> &l)
{
	if (l.size() <= 1)
		return (l);
	std::list<int>::iterator middle = l.begin();
	std::advance(middle, l.size() / 2);
	std::list<int> left(l.begin(), middle);
	std::list<int> right(middle, l.end());
	left = listMergeInsertSort(left);
	right = listMergeInsertSort(right);
	return (listMergeSort(left, right));
}

void	PmergeMe::sort_list(std::string sequence)
{
	std::istringstream	iss(sequence);
	int					num;

	clock_t	time = clock();
	while (iss >> num)
	{
		_l.push_back(num);
		_lSize++;
	}
	_l = listMergeInsertSort(_l);
	time = clock() - time;
	_lTime = ((double)time)/CLOCKS_PER_SEC;
}

void	PmergeMe::sorting(std::string sequence)
{
	sort_vector(sequence);
	sort_list(sequence);
	std::cout << "Before:  " << sequence << std::endl;
	std::cout << "After:   ";
	for (int num : _l)
		std::cout << num << " ";
	std::cout << std::endl;
	std::cout << std::fixed << std::setprecision(6) << "Time to process a range of " << _vSize << " with std::vector :   "  << _vTime << " s"  << std::endl;
	std::cout << std::fixed << std::setprecision(6) << "Time to process a range of " << _lSize << " with std::list   :   "  << _lTime << " s"  << std::endl;
}