/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:42:30 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/06 19:24:39 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_Utils.hpp"

//a + n
//n + a
//a - n
//a - b
//a < b
//a > b
//a <= b
//a >= b
//a += n
//a -= n
//a[n]
#define SIZE 8

template
<
	typename Iterator,
	typename ConstIterator
>
static void	_test	(Iterator src_it,
					 ConstIterator src_cit,
					 int n)
{
	TRY_CATCH
	(
		Iterator		it(src_it);
		ConstIterator	cit(src_cit);

//	test <
		PRINT_EXECUTE(it  < src_it);
		PRINT_EXECUTE(it  < src_cit);
		PRINT_EXECUTE(it  < cit);
		PRINT_EXECUTE(cit < src_it);
		PRINT_EXECUTE(cit < src_cit);
		PRINT_EXECUTE(cit < it);

//	test <=
		PRINT_EXECUTE(it  <= src_it);
		PRINT_EXECUTE(it  <= src_cit);
		PRINT_EXECUTE(it  <= cit);
		PRINT_EXECUTE(cit <= src_it);
		PRINT_EXECUTE(cit <= src_cit);
		PRINT_EXECUTE(cit <= it);

//	test >
		PRINT_EXECUTE(it  > src_it);
		PRINT_EXECUTE(it  > src_cit);
		PRINT_EXECUTE(it  > cit);
		PRINT_EXECUTE(cit > src_it);
		PRINT_EXECUTE(cit > src_cit);
		PRINT_EXECUTE(cit > it);

//	test >=
		PRINT_EXECUTE(it  >= src_it);
		PRINT_EXECUTE(it  >= src_cit);
		PRINT_EXECUTE(it  >= cit);
		PRINT_EXECUTE(cit >= src_it);
		PRINT_EXECUTE(cit >= src_cit);
		PRINT_EXECUTE(cit >= it);



//	test (iterator + difference_type) and <
		PRINT_EXECUTE((it + n)  < src_it);
		PRINT_EXECUTE((it + n)  < src_cit);
		PRINT_EXECUTE((it + n)  < cit);
		PRINT_EXECUTE((cit + n) < src_it);
		PRINT_EXECUTE((cit + n) < src_cit);
		PRINT_EXECUTE((cit + n) < it);

//	test (iterator + difference_type) and <=
		PRINT_EXECUTE((it + n)  <= src_it);
		PRINT_EXECUTE((it + n)  <= src_cit);
		PRINT_EXECUTE((it + n)  <= cit);
		PRINT_EXECUTE((cit + n) <= src_it);
		PRINT_EXECUTE((cit + n) <= src_cit);
		PRINT_EXECUTE((cit + n) <= it);

//	test (iterator + difference_type) and >
		PRINT_EXECUTE((it + n)  > src_it);
		PRINT_EXECUTE((it + n)  > src_cit);
		PRINT_EXECUTE((it + n)  > cit);
		PRINT_EXECUTE((cit + n) > src_it);
		PRINT_EXECUTE((cit + n) > src_cit);
		PRINT_EXECUTE((cit + n) > it);

//	test (iterator + difference_type) and >=
		PRINT_EXECUTE((it + n)  >= src_it);
		PRINT_EXECUTE((it + n)  >= src_cit);
		PRINT_EXECUTE((it + n)  >= cit);
		PRINT_EXECUTE((cit + n) >= src_it);
		PRINT_EXECUTE((cit + n) >= src_cit);
		PRINT_EXECUTE((cit + n) >= it);



//	test (difference_type + iterator) and <
		PRINT_EXECUTE((n + it)  < src_it);
		PRINT_EXECUTE((n + it)  < src_cit);
		PRINT_EXECUTE((n + it)  < cit);
		PRINT_EXECUTE((n + cit) < src_it);
		PRINT_EXECUTE((n + cit) < src_cit);
		PRINT_EXECUTE((n + cit) < it);

//	test (difference_type + iterator) and <=
		PRINT_EXECUTE((n + it)  <= src_it);
		PRINT_EXECUTE((n + it)  <= src_cit);
		PRINT_EXECUTE((n + it)  <= cit);
		PRINT_EXECUTE((n + cit) <= src_it);
		PRINT_EXECUTE((n + cit) <= src_cit);
		PRINT_EXECUTE((n + cit) <= it);

//	test (difference_type + iterator) and >
		PRINT_EXECUTE((n + it)  > src_it);
		PRINT_EXECUTE((n + it)  > src_cit);
		PRINT_EXECUTE((n + it)  > cit);
		PRINT_EXECUTE((n + cit) > src_it);
		PRINT_EXECUTE((n + cit) > src_cit);
		PRINT_EXECUTE((n + cit) > it);

//	test (difference_type + iterator) and >=
		PRINT_EXECUTE((n + it)  >= src_it);
		PRINT_EXECUTE((n + it)  >= src_cit);
		PRINT_EXECUTE((n + it)  >= cit);
		PRINT_EXECUTE((n + cit) >= src_it);
		PRINT_EXECUTE((n + cit) >= src_cit);
		PRINT_EXECUTE((n + cit) >= it);



//	test (iterator - iterator)
		PRINT_EXECUTE((it - src_it));
		PRINT_EXECUTE((it - src_cit));
		PRINT_EXECUTE((it - cit));
		PRINT_EXECUTE((cit - src_it));
		PRINT_EXECUTE((cit - src_cit));
		PRINT_EXECUTE((cit - it));



//	test iterator[n] and <
		PRINT_EXECUTE((it[n])  < *src_it);
		PRINT_EXECUTE((it[n])  < *src_cit);
		PRINT_EXECUTE((it[n])  < *cit);
		PRINT_EXECUTE((cit[n]) < *src_it);
		PRINT_EXECUTE((cit[n]) < *src_cit);
		PRINT_EXECUTE((cit[n]) < *it);

//	test iterator[n] and <=
		PRINT_EXECUTE((it[n])  <= *src_it);
		PRINT_EXECUTE((it[n])  <= *src_cit);
		PRINT_EXECUTE((it[n])  <= *cit);
		PRINT_EXECUTE((cit[n]) <= *src_it);
		PRINT_EXECUTE((cit[n]) <= *src_cit);
		PRINT_EXECUTE((cit[n]) <= *it);

//	test iterator[n] and >
		PRINT_EXECUTE((it[n])  > *src_it);
		PRINT_EXECUTE((it[n])  > *src_cit);
		PRINT_EXECUTE((it[n])  > *cit);
		PRINT_EXECUTE((cit[n]) > *src_it);
		PRINT_EXECUTE((cit[n]) > *src_cit);
		PRINT_EXECUTE((cit[n]) > *it);

//	test iterator[n] and >=
		PRINT_EXECUTE((it[n])  >= *src_it);
		PRINT_EXECUTE((it[n])  >= *src_cit);
		PRINT_EXECUTE((it[n])  >= *cit);
		PRINT_EXECUTE((cit[n]) >= *src_it);
		PRINT_EXECUTE((cit[n]) >= *src_cit);
		PRINT_EXECUTE((cit[n]) >= *it);



//	test iterator += n and < <= > >=
		PRINT_AND_EXECUTE(it += n);
		PRINT_AND_EXECUTE(cit += n);
//	test <
		PRINT_EXECUTE(it  < src_it);
		PRINT_EXECUTE(it  < src_cit);
		PRINT_EXECUTE(it  < cit);
		PRINT_EXECUTE(cit < src_it);
		PRINT_EXECUTE(cit < src_cit);
		PRINT_EXECUTE(cit < it);
//	test <=
		PRINT_EXECUTE(it  <= src_it);
		PRINT_EXECUTE(it  <= src_cit);
		PRINT_EXECUTE(it  <= cit);
		PRINT_EXECUTE(cit <= src_it);
		PRINT_EXECUTE(cit <= src_cit);
		PRINT_EXECUTE(cit <= it);
//	test >
		PRINT_EXECUTE(it  > src_it);
		PRINT_EXECUTE(it  > src_cit);
		PRINT_EXECUTE(it  > cit);
		PRINT_EXECUTE(cit > src_it);
		PRINT_EXECUTE(cit > src_cit);
		PRINT_EXECUTE(cit > it);
//	test >=
		PRINT_EXECUTE(it  >= src_it);
		PRINT_EXECUTE(it  >= src_cit);
		PRINT_EXECUTE(it  >= cit);
		PRINT_EXECUTE(cit >= src_it);
		PRINT_EXECUTE(cit >= src_cit);
		PRINT_EXECUTE(cit >= it);

//	test iterator -= n and < <= > >=
		PRINT_AND_EXECUTE(it -= n);
		PRINT_AND_EXECUTE(cit -= n);
//	test <
		PRINT_EXECUTE(it  < src_it);
		PRINT_EXECUTE(it  < src_cit);
		PRINT_EXECUTE(it  < cit);
		PRINT_EXECUTE(cit < src_it);
		PRINT_EXECUTE(cit < src_cit);
		PRINT_EXECUTE(cit < it);
//	test <=
		PRINT_EXECUTE(it  <= src_it);
		PRINT_EXECUTE(it  <= src_cit);
		PRINT_EXECUTE(it  <= cit);
		PRINT_EXECUTE(cit <= src_it);
		PRINT_EXECUTE(cit <= src_cit);
		PRINT_EXECUTE(cit <= it);
//	test >
		PRINT_EXECUTE(it  > src_it);
		PRINT_EXECUTE(it  > src_cit);
		PRINT_EXECUTE(it  > cit);
		PRINT_EXECUTE(cit > src_it);
		PRINT_EXECUTE(cit > src_cit);
		PRINT_EXECUTE(cit > it);
//	test >=
		PRINT_EXECUTE(it  >= src_it);
		PRINT_EXECUTE(it  >= src_cit);
		PRINT_EXECUTE(it  >= cit);
		PRINT_EXECUTE(cit >= src_it);
		PRINT_EXECUTE(cit >= src_cit);
		PRINT_EXECUTE(cit >= it);
	)
}

int	main	(void)
{
	NAMESPACE::vector<int>					v;
	NAMESPACE::vector<int>::iterator		it;
	NAMESPACE::vector<int>::const_iterator	cit;

	for (int i = 0; i < SIZE; i++)
		v.push_back(i * 7 / 3);
	for (int i = 0; i < SIZE / 2; i++)
	{
		it = v.begin() + i;
		cit = v.begin() + i;
		_test(it, cit, i);
	}
}
