/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:09:22 by mkulikov          #+#    #+#             */
/*   Updated: 2025/04/22 17:14:28 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}

template<typename T>
T max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

#endif
