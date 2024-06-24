#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:

		T* 				_arr;
		unsigned int	_size;

	public:

		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &original);
		Array &operator=(const Array &other);
		T& operator[](unsigned int i);
		unsigned int	size() const;

	class OutOfBoundsException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("Out of bounds value");
            }
    };
};

#include "Array.tpp"

#endif