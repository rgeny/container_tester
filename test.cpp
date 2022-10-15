#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "includes/test_map.hpp"

#define NDEBUG
#include <cassert>

#include "RBTree.hpp"
#include "iterator.hpp"
#include "RBTree/RBNode.hpp"
# include "vector.hpp"
//#include "map.hpp"

#define SIZE 10
#define TYPE long

//std::ostream &	operator<<	(std::ostream & os,
//							 NAMESPACE::pair<TYPE, TYPE> const & p)
//{
//	os	<< "("
//		<< p.first
//		<< ":"
//		<< p.second
//		<< ")";
//	return (os);
//}

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
	{	return (val.first);	}
};

typedef ft::RB::Tree<TYPE, NAMESPACE::pair<TYPE, TYPE>, KeyOfValue<TYPE, NAMESPACE::pair<TYPE, TYPE> >, value_compare<TYPE> >		MAP;

//ft::RB::Tree<TYPE, NAMESPACE::pair<TYPE, TYPE>, KeyOfValue<TYPE, NAMESPACE::pair<TYPE, TYPE> >, value_compare<TYPE> >	test;
MAP	test;

__attribute__((unused)) static void	_insert	(TYPE val)
{
	NAMESPACE::pair<TYPE, TYPE>	p(val, val);
	NAMESPACE::pair<TYPE, TYPE>	p2(val, -1 - val);
	test.insert(p);
//#ifdef __DEBUG__
//	test.print();
//#endif
	test.insert(p2);
#ifdef __DEBUG__
	test.print();
#endif
	std::cout	<< "insert("
				<< p
				<< ")"
				<< std::endl
				<< "size == "
				<< test.size()
				<< std::endl;
	PRINT_EXECUTE(test._head->parent);
	PRINT_EXECUTE(test._head->left);
	PRINT_EXECUTE(test._head->right);
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
	PRINT_EXECUTE(test._head->parent);
	PRINT_EXECUTE(test._head->left);
	PRINT_EXECUTE(test._head->right);
}

int	main	(void)
{
	_insert(0);
	_insert(-10);
	_insert(-20);
	_insert(-7);
	_insert(-9000);

	_print_nl();

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
//	_insert(4);
}
