/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:00:59 by mkulikov          #+#    #+#             */
/*   Updated: 2025/05/19 18:55:37 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
#include "Array.hpp"
#include "Utils.hpp"

int main()
{
	Array<std::string> words(5);
	std::string* words_copy = new std::string[5];
	words_copy[0] = "42";
	words_copy[1] = "hello";
	words_copy[2] = "world";
	words_copy[3] = "!!!";
	words_copy[4] = "test";
	for (size_t i = 0; i < 5; i++)
	{
		words[i] = words_copy[i];
	}
	std::cout << "Print words: " << words << std::endl;
	std::cout << "Print words_copy: ";
	print_words(words_copy, 5);
	Array<std::string> words2(words);
	std::cout << "Print words2: " << words2 << std::endl;
	delete [] words_copy;
	return 0;
}
