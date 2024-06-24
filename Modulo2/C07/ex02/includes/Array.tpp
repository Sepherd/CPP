#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _arr(0), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n)
{}

template <typename T>
Array<T>::~Array()
{
	delete [] _arr;
}

template <typename T>
Array<T>::Array(const Array &original) : _arr(new T[original._size]), _size(original._size)
{
    for (size_t i = 0; i < _size; i++)
        this->_arr[i] = original._arr[i];
}

template <typename T>
Array<T>&Array<T>::operator=(const Array &other)
{
	if (this != &other)
    {
        delete [] _arr;
        _arr = new T[other._size]();
        _size = other._size;
        for (size_t i = 0; i < other._size; i++)
            _arr[i] = other._arr[i];
    }
    return (*this);
}

template <typename T>
T   &Array<T>::operator[](unsigned int i)
{
    if (i >= _size)
        throw OutOfBoundsException();
    return (_arr[i]);
}

template <typename T>
unsigned int    Array<T>::size() const
{
    return (_size);
}

#endif