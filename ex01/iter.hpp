/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:33:38 by mkulikov          #+#    #+#             */
/*   Updated: 2025/05/14 09:38:04 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void printElement(const T& x)
{
	std::cout << x << ' ';
}

template <typename T, typename Func>
void iter(T* array, std::size_t length, Func f)
{
	if (!array)
		return;
	for (std::size_t i = 0; i < length; i++)
		f(array[i]);
}

template <typename T, typename Func>
void iter(const T* array, std::size_t length, Func f)
{
	if (!array)
		return;
	for (std::size_t i = 0; i < length; ++i)
		f(array[i]);
}

#endif
