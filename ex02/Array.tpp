/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:55:14 by mkulikov          #+#    #+#             */
/*   Updated: 2025/05/19 18:15:40 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const std::size_t n) : _data(NULL), _size(n)
{
	std::cout << "Array parameterized constructor called" << std::endl;
	if (_size)
		_data = new T[_size]();
}

template <typename T>
Array<T>::Array(const Array& other) : _data(NULL), _size(other._size)
{
	std::cout << "Array copy constructor called" << std::endl;
	if (_size)
	{
		_data = new T[_size]();
		for (std::size_t i = 0; i < _size; i++)
			_data[i] = other._data[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	std::cout << "Array assignment operator called" << std::endl;
	if (this != other)
	{
		delete [] _data;
		_size = other._size;
		_data = _size ? new T[_size]() : NULL;
		if (_size)
		{
			for (std::size_t i = 0; i < _size; i++)
				_data[i] = other._data[i];
		}
	}
	return this;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor called" << std::endl;
	delete [] _data;
}

template <typename T>
T& Array<T>::operator[](std::size_t idx)
{
	if (idx >= _size)
		throw std::out_of_range("Array::operator[] out of range");
	return _data[idx];
}

template <typename T>
const T& Array<T>::operator[](std::size_t idx) const
{
	if (idx >= _size)
		throw std::out_of_range("Array::operator[] const out of range");
	return _data[idx];
}

template <typename T>
std::size_t Array<T>::size() const
{
	return _size;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& a)
{
	os << "[";
	const size_t n = a.size();
	for (size_t i = 0; i < n; i++)
	{
		os << a[i];
		if (i < n - 1)
			os << " ";
	}
	os << "]";
	return os;
}

#endif
