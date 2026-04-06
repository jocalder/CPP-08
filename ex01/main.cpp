/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 11:41:25 by jocalder          #+#    #+#             */
/*   Updated: 2026/04/06 13:03:36 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	std::cout << "TEST 1: SUBJECT TEST" << std::endl;
	Span 	sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl << std::endl;

	std::cout << "TEST 2: FULL SPAN" << std::endl;
	Span	sp2(3);
	try
	{
		sp2.addNumber(1);
		sp2.addNumber(2);
		sp2.addNumber(3);
		sp2.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST 3: NOT ENOUGH NUMBERS" << std::endl;
	Span	sp3(10);
	try
	{
		sp3.addNumber(42);
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST 4: DUPLICATE NUMBERS" << std::endl;
	Span	sp4(5);
	sp4.addNumber(10);
	sp4.addNumber(10);
	sp4.addNumber(20);
	sp4.addNumber(30);
	sp4.addNumber(40);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	
	std::cout << "TEST 5: RANGE TEST" << std::endl;
	Span	sp5(10);

	std::vector<int>	values;
	values.push_back(10);
	values.push_back(20);
	values.push_back(30);
	values.push_back(40);
	values.push_back(50);

	try
	{
		sp5.addRange(values.begin(), values.end());
		sp5.printNumbers();
		std::cout << "Shortest span: " << sp5.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp5.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}