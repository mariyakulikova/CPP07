/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:37:28 by mkulikov          #+#    #+#             */
/*   Updated: 2025/05/14 09:42:36 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int& x)
{
	x++;
}

int main() {
	std::string words[] = {"hello", "world", "42"};
	std::size_t wordsLen = sizeof(words) / sizeof(words[0]);

	std::cout << "Words: ";
	iter(words, wordsLen, printElement<std::string>);
	std::cout << std::endl;

	int numbers[] = {1, 2, 3, 4, 5};
	std::size_t numLen = sizeof(numbers) / sizeof(numbers[0]);

	std::cout << "Numbers before increment: ";
	iter(numbers, numLen, printElement<int>);
	std::cout << std::endl;
	iter(numbers, numLen, increment);
	std::cout << "Numbers after increment: ";
	iter(numbers, numLen, printElement<int>);
	std::cout << std::endl;

	const double digits[] = {1.0, 2.0, 3.0, 4.0, 5.0};
	std::size_t digitsLen = sizeof(digits) / sizeof(digits[0]);

	std::cout << "Digits: ";
	iter(digits, digitsLen, printElement<double>);
	std::cout << std::endl;
	return 0;
}
