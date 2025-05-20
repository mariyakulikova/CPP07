/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:00:59 by mkulikov          #+#    #+#             */
/*   Updated: 2025/05/20 14:28:57 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
#include "Array.hpp"
#include "Utils.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "Tests with array of strings:" << std::endl;
	Array<std::string> words(5);
	std::string* words_scource = new std::string[5];
	words_scource[0] = "42";
	words_scource[1] = "hello";
	words_scource[2] = "world";
	words_scource[3] = "!!!";
	words_scource[4] = "test";
	for (size_t i = 0; i < 5; i++)
	{
		words[i] = words_scource[i];
	}
	std::cout << "Print words: " << words << std::endl;
	std::cout << "Print words_scource: ";
	print_elements(words_scource, 5);

	std::cout << "Change the first element of words_scoure:" << std::endl;
	words_scource[0] = "21";
	std::cout << "Print words: " << words << std::endl;
	std::cout << "Print words_scource: ";
	print_elements(words_scource, 5);

	std::cout << "Change the first element of words:" << std::endl;
	words[0] = "13";
	std::cout << "Print words: " << words << std::endl;
	std::cout << "Print words_scource: ";
	print_elements(words_scource, 5);

	std::cout << "Test access with []:" << std::endl;
	for (size_t i = 0; i < 5; i++)
	{
		try
		{
			std::cout << words[i];
			if (i < 4)
				std::cout << " ";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;

	std::cout << "Test access an element with [], when it's index is out of a bounds:" << std::endl;
	try
	{
		std::cout << words[-666];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << words[666];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<std::string> words2(words);
	std::cout << "Print words2: " << words2 << std::endl;
	std::cout << "Words2 size -> " << words2.size() << std::endl;
	delete [] words_scource;

	std::cout << "Tests with array of numbers:" << std::endl;
	Array<int> numbers(10);
	int* numbers_scource = new int[10];
	for (size_t i = 0; i < 10; i++)
	{
		numbers_scource[i] = i + 10;
	}
	for (size_t i = 0; i < 10; i++)
	{
		numbers[i] = numbers_scource[i];
	}
	std::cout << "Print numbers_scource: ";
	print_elements(numbers_scource, 10);
	std::cout << "Print numbers: " << numbers << std::endl;

	std::cout << "Change one random element of numbers_scoure to value 777:" << std::endl;
	std::srand(std::time(0));
	numbers_scource[std::rand() % 10] = 777;
	std::cout << "Print numbers_scource: ";
	print_elements(numbers_scource, 10);
	std::cout << "Print numbers: " << numbers << std::endl;

	std::cout << "Change one random element of numbers to value 888:" << std::endl;
	std::srand(std::time(0));
	numbers[std::rand() % 10] = 888;
	std::cout << "Print numbers_scource: ";
	print_elements(numbers_scource, 10);
	std::cout << "Print numbers: " << numbers << std::endl;

	std::cout << "Test access an element with [], when it's index is out of a bounds:" << std::endl;
	try
	{
		std::cout << numbers[-666];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << numbers[666];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete [] numbers_scource;
	return 0;
}
