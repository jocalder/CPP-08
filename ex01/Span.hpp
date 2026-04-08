/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 10:52:48 by jocalder          #+#    #+#             */
/*   Updated: 2026/04/08 10:46:34 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <limits>
#include <climits>
#include <iterator>
#include <algorithm>
#include <vector>
#include <stdexcept>
#include <exception>


class Span
{
	private:
		unsigned int		_maxSize;
		std::vector<int>	_numbers;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& other);
		Span&	operator=(const Span& other);
		~Span();
		
		void	addNumber(int number);
		template <typename Iterator>
		void	addRange(Iterator begin, Iterator end)
		{
			unsigned int	distance = std::distance(begin, end);
			if (_numbers.size() + distance > _maxSize)
				throw std::runtime_error("Cannot add range: Span will overflow.");
			_numbers.insert(_numbers.end(), begin, end);
		}
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			printNumbers() const;
};

#endif