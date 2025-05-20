/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:38:23 by mkulikov          #+#    #+#             */
/*   Updated: 2025/05/20 12:26:44 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>

template <typename T>
void print_elements(const T* words, std::size_t n)
{
	std::cout << "[";
	for (std::size_t i = 0; i < n; ++i)
	{
		std::cout << words[i];
		if (i < n - 1)
			std::cout << " ";
	}
	std::cout << "]" << std::endl;
}
