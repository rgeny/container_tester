/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:02:57 by rgeny             #+#    #+#             */
/*   Updated: 2022/03/28 12:04:42 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"
#include <vector>
#include <iostream>

#ifndef NAMESPACE
# define NAMESPACE ft
# define SNAMESPACE "ft"
#else
# define SNAMESPACE "std"
#endif

//#include <iostream>
//#include <memory>
//
//#define SIZE 500000000

int	main(void)
{
	NAMESPACE::vector<int>	v1;

//	std::cout << SNAMESPACE << " : " << v1.size() << std::endl;
	std::cout << v1.size() << std::endl;
//	while (1);

//	std::vector<int>	vstd;
//	ft::vector<int>		vft;
//
//	std::cout << vstd.size() << std::endl;
//	std::cout << vstd.capacity() << std::endl;
//	for (int i = 0; i < 9000; i++)
//		vstd.push_back(i);
//	std::cout << vstd.size() << std::endl;
//	std::cout << vstd.capacity() << std::endl;
//
//	std::vector<int>::iterator	it = vstd.begin();
//	std::cout << std::endl;
//	vstd.erase(it, vstd.end());
//	std::cout << vstd.size() << std::endl;
//	std::cout << vstd.capacity() << std::endl;


	return (0);
}


//	std::allocator<int>	Alloc;
//	try
//	{
//		int *				x		= Alloc.allocate(SIZE);
//		for (std::size_t i = 0; i < SIZE; i++)
//			x[i] = i;
//		for (std::size_t i = 0; i < SIZE; i++)
//			std::cout << x[i] << std::endl;
//		Alloc.deallocate(x, SIZE);
//	}
//	catch (std::exception & s)
//	{
//		std::cout << "\n\n\n\nTEST\n\n\n\n\n";
//		std::cout << s.what() << std::endl;
//	}

