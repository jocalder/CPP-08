/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 09:03:26 by jocalder          #+#    #+#             */
/*   Updated: 2026/04/08 09:47:06 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
//#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator	it = container.begin();
	while (it != container.end())
	{
		if (*it == value)
			return it;
		++it;
	}	
	throw std::runtime_error("Value not found in container");
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int value)
{
	typename T::const_iterator	it = container.begin();
	while (it != container.end())
	{
		if (*it == value)
			return it;
		++it;
	}	
	throw std::runtime_error("Value not found in container");
}

#endif