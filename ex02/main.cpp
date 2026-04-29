/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 10:09:07 by jocalder          #+#    #+#             */
/*   Updated: 2026/04/23 09:58:50 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main()
{
	std::cout << "TEST 1: SUBJECT TEST" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;
	std::cout << "TEST 2: REVERSE ITERATOR" << std::endl;
	
	MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator	rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::cout << std::endl;

	std::cout << "TEST 3: CONST ITERATOR" << std::endl;
	MutantStack<int>	temp;
	
	temp.push(1);
	temp.push(2);
	temp.push(3);

	const MutantStack<int> const_mstack = temp;
	
	MutantStack<int>::const_iterator	const_it = const_mstack.begin();
	MutantStack<int>::const_iterator	const_ite = const_mstack.end();
	while (const_it != const_ite)
	{
		std::cout << *const_it << std::endl;
		++const_it;
	}
	std::cout << std::endl;

	std::cout << "TEST 4: COMPARE WITH LIST AND VECTOR" << std::endl;
	MutantStack<int>	ms;
	std::list<int>		lst;
	std::vector<int>	vec;

	int		values[] = {5, 17, 3, 5, 737, 0};

	for (int i = 0; i < 6; i++)
	{
		ms.push(values[i]);
		lst.push_back(values[i]);
		vec.push_back(values[i]);
	}
	std::cout << "Mutant stack values:" << std::endl;
	for (MutantStack<int>::iterator	iter = ms.begin(); iter != ms.end(); ++iter)
		std::cout << *iter << std::endl;
	
	std::cout << "std::list values:" <<std::endl;
	for (std::list<int>::iterator lst_iter = lst.begin(); lst_iter != lst.end(); ++lst_iter)
		std::cout << *lst_iter << std::endl;
	
	std::cout << "std::vector values:" << std::endl;
	for (std::vector<int>::iterator vec_iter = vec.begin(); vec_iter != vec.end(); vec_iter++)
		std::cout << *vec_iter << std::endl;
		
	return 0;
}