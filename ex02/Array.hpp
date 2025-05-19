/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:41:40 by mkulikov          #+#    #+#             */
/*   Updated: 2025/05/19 18:15:08 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include <iostream>

template<typename T>
class Array
{
private:
	T* _data;
	std::size_t _size;
public:
	Array();
	Array(std::size_t n);
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();

	T& operator[](std::size_t idx);
	const T& operator[](std::size_t idx) const;

	std::size_t size() const;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& a);

#include "Array.tpp"

#endif
