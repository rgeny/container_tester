/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structor.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:54:03 by rgeny             #+#    #+#             */
/*   Updated: 2022/05/25 01:29:42 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

#define SIZE 17
#define VAL 4

int	main	(void)
{
	NAMESPACE::vector<int>	v(SIZE);

	init_vector(v, SIZE, VAL);

	std::cout	<< "copy constructor"
				<< std::endl;
	{
		NAMESPACE::vector<int>::reverse_iterator	it1 = v.rbegin(),
													it2 = v.rend(),
													it3(it1),
													it4(it2);

		std::cout	<< *it1
					<< std::endl
					<< *it2
					<< std::endl
					<< *it3
					<< std::endl
					<< *it4
					<< std::endl;
	}
	std::cout	<< "iterator parameter constructor"
				<< std::endl;
	{
		NAMESPACE::vector<int>::iterator			it	= v.begin(),
													ite	= v.end();
		NAMESPACE::vector<int>::reverse_iterator	rit(it),
													rite(ite);
		std::cout	<< *it
					<< std::endl
					<< *ite
					<< std::endl
					<< *rit
					<< std::endl
					<< *rite
					<< std::endl;
	}
	std::cout	<< "Default constructor"
				<< std::endl;
	{
		NAMESPACE::vector<int>::reverse_iterator	it;

		std::cout	<< *it
					<< std::endl;
	}


	return (0);
}
