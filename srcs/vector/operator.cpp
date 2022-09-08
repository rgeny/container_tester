/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:58:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/03 14:15:57 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

template
<
	typename T,
	typename Class
>
static void	_test	(Class v1,
					 Class v2)
{
	TRY_CATCH
	(
		std::cout	<< std::boolalpha
					
					<< "v1 == v2 ? "
					<< (v1 == v2)
					<< std::endl

					<< "v1 != v2 ? "
					<< (v1 != v2)
					<< std::endl

					<< "v1 < v2  ? "
					<< (v1 < v2)
					<< std::endl

					<< "v1 <= v2 ? "
					<< (v1 <= v2)
					<< std::endl

					<< "v1 > v2  ? "
					<< (v1 > v2)
					<< std::endl

					<< "v1 >= v2 ? "
					<< (v1 >= v2)
					<< std::endl;
	)
}

int	main	(void)
{
	NAMESPACE::vector<double>	v,
								v2(14),
								v3(3, 9.48926),
								v4(v),
								v5(v2),
								v6(v3);
	
	_test<double>(v, v);
	_test<double>(v, v2);
	_test<double>(v, v3);
	_test<double>(v, v4);
	_test<double>(v, v5);
	_test<double>(v, v6);
	_test<double>(v2, v);
	_test<double>(v2, v2);
	_test<double>(v2, v3);
	_test<double>(v2, v4);
	_test<double>(v2, v5);
	_test<double>(v2, v6);
	_test<double>(v3, v);
	_test<double>(v3, v2);
	_test<double>(v3, v3);
	_test<double>(v3, v4);
	_test<double>(v3, v5);
	_test<double>(v3, v6);
	_test<double>(v4, v);
	_test<double>(v4, v2);
	_test<double>(v4, v3);
	_test<double>(v4, v4);
	_test<double>(v4, v5);
	_test<double>(v4, v6);
	_test<double>(v5, v);
	_test<double>(v5, v2);
	_test<double>(v5, v3);
	_test<double>(v5, v4);
	_test<double>(v5, v5);
	_test<double>(v5, v6);
	_test<double>(v6, v);
	_test<double>(v6, v2);
	_test<double>(v6, v3);
	_test<double>(v6, v4);
	_test<double>(v6, v5);
	_test<double>(v6, v6);
}
