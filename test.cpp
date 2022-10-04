#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "includes/test_Utils.hpp"

#define NDEBUG
#include <cassert>

#include "RBTree.hpp"
#include "iterator.hpp"
#include "RBTree/RBNode.hpp"
# include "vector.hpp"
//#include "map.hpp"

#define SIZE 10
#define TYPE long

template < typename T >
struct value_compare
	:public std::binary_function<T, T, bool>
{
	value_compare	(void)
		:comp()
	{	}


	T	operator()	(T const & lhs,
					 T const & rhs)
	{
		return (comp(lhs, rhs));
	}
	protected:
		std::less<T>	comp;
};

template
<
	typename Key,
	typename Value
>
struct KeyOfValue
{
	KeyOfValue	(void)
	{	}

	Key	operator()	(Value const & val)
	{	return (val);	}
};

//#if NAMESPACE == std
//	std::map<int, int>	test;
//#else
	ft::RB::Tree<TYPE, TYPE, KeyOfValue<TYPE, TYPE>, value_compare<TYPE> >	test;
//#endif

__attribute__((unused)) static void	_insert	(TYPE val)
{
#ifdef __DEBUG__
//# if NAMESPACE == std
//	test[val] = val;
//	print(test.begin()._M_node;
//# else
	test.insert(val);
	test.print();
//# endif
#endif
	std::cout	<< "insert("
				<< val
				<< ")"
				<< std::endl
				<< "size == "
				<< test.size()
				<< std::endl;
}

 __attribute__((unused)) static void	_erase	(TYPE val)
{
	test.erase(val);
#ifdef __DEBUG__
	test.print();
#endif
	std::cout	<< "erase("
				<< val
				<< ")"
				<< std::endl
				<< "size == "
				<< test.size()
				<< std::endl;
}

int	main	(void)
{
	_insert(0);
	_insert(-10);
	_insert(-20);
	_insert(-7);
	_insert(-9000);
	_insert(-19);
	_insert(-9);
	_insert(-8);
	_insert(-6);
	_insert(-5);
	_insert(-4);
	_insert(-3);
	_insert(-2);
	_insert(-1);
	_insert(80);
	_insert(7);
	_insert(6);
	_insert(8);
	_insert(90);
	_insert(85);
	_insert(95);
	_insert(2147483648);


	_erase(-9000);
	_erase(-9);
	_erase(-20);
	_erase(-10);
	_erase(-19);
	_erase(7);
	_erase(80);
	_erase(-3);
	_erase(-2);
	_erase(-6);
	_erase(0);
	_erase(6);
	_erase(-5);
	_erase(-7);
	_erase(-8);
	_erase(-4);
	_erase(-1);
	_erase(2147483648);
	_erase(90);
	_erase(95);
	_erase(8);
	_erase(85);
	_insert(4);
}
