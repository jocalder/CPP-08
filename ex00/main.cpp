/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 09:17:52 by jocalder          #+#    #+#             */
/*   Updated: 2026/04/22 11:44:31 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void printContainer(const T& container)
{
    typename T::const_iterator it = container.begin();
    typename T::const_iterator end = container.end();

    std::cout << "[ ";
    for (; it != end; ++it)
        std::cout << *it << " ";
    std::cout << "]" << std::endl;
}

int	main()
{
	std::cout << "TEST 1: VECTOR FOUND" << std::endl;
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	printContainer(v);
	
	try
	{
		std::vector<int>::iterator	it = easyfind(v, 3);
		std::cout << "Found in vector: " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST 2: VECTOR NOT FOUND" << std::endl;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	printContainer(v);

	try
	{
		std::vector<int>::iterator	it = easyfind(v, 90);
		std::cout << "Found in vector: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "TEST 3: LIST FOUND" << std::endl;
	std::list<int>	lst;

	lst.push_back(15);
	lst.push_back(25);
	lst.push_back(35);
	lst.push_front(45);

	printContainer(lst);

	try
	{
		std::list<int>::iterator	it = easyfind(lst, 25);
		std::cout << "Found in list: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "TEST 4: DEQUE FOUND" << std::endl;
	std::deque<int>	dq;

	dq.push_back(4);
	dq.push_front(3);
	dq.push_back(5);
	dq.push_back(6);

	printContainer(dq);
	try
	{
		std::deque<int>::iterator	it = easyfind(dq, 3);
		std::cout << "Found in deque: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	std::cout << std::endl;
	
	std::cout << "TEST 5: CONST CONTAINER" << std::endl;
	std::vector<int>	temp;
	temp.push_back(3);
	temp.push_back(6);
	temp.push_back(9);

	const std::vector<int>	vec = temp;

	printContainer(vec);
	
	try
	{
		std::vector<int>::const_iterator	it = easyfind(vec, 6);
		std::cout << "Found in const container: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error:" << e.what() << '\n';
	}
	return 0;
}