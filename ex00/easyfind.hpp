/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 09:03:26 by jocalder          #+#    #+#             */
/*   Updated: 2026/04/06 09:41:18 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator	it =
			std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return it;
}

template <typename T>
typename T::const_iterator easyfind(const T& container, int value)
{
	typename T::const_iterator	it =
			std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return it;
}

#endif