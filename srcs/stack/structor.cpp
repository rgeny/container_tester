/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structor.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:19:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 15:17:11 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"
#include <vector>

int	main	(void)
{
	_print_nl	("constructor with std::vector<int>");
	{
		std::vector<int>	v;

		for (int i = 17; i < 31; i++)
			v.push_back(i);

		NAMESPACE::stack<int, std::vector<int> >	s(v);
		while (!s.empty())
		{
			std::cout	<< s.top()
						<< std::endl;
			s.pop();
		}
	}
	_print_nl	("constructor with std::list<float>");
	{
		std::vector<float>	v;

		for (float i = 1; i < 12; i++)
			v.push_back(i * 91.219);

		NAMESPACE::stack<float, std::vector<float> >	s(v);
		while (!s.empty())
		{
			std::cout	<< s.top()
						<< std::endl;
			s.pop();
		}
	}

	return (0);
}
