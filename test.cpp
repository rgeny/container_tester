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

ft::RB::Tree<TYPE, TYPE, KeyOfValue<TYPE, TYPE>, value_compare<TYPE> >	test;

__attribute__((unused)) static void	_insert	(TYPE val)
{
	test.insert(val);
#ifdef __DEBUG__
		test.print();
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
	ft::vector<int>	v(10, 10);
	ft::RB::Tree<int>	tree;

	tree.insert(1);
	tree.insert(2);
	ft::RB::NodeBase	node(*tree.begin());

	std::cout	<< std::endl;
	ft::RB::Tree_iterator<int>	it, it2(&node), it3(it2);
	ft::RB::Tree_iterator<int const, ft::RB::NodeBase>	cit(it3);
	std::cout	<< std::endl;

	it = cit;
//	cit = it;

	PRINT_EXECUTE(it == it);
	PRINT_EXECUTE(it != it);
	PRINT_EXECUTE(it == it2);
	PRINT_EXECUTE(it != it2);
	PRINT_EXECUTE(it == it3);
	PRINT_EXECUTE(it != it3);
	PRINT_EXECUTE(it == cit);
	PRINT_EXECUTE(it != cit);
	std::cout	<< std::endl;

	PRINT_EXECUTE(it2 == it);
	PRINT_EXECUTE(it2 != it);
	PRINT_EXECUTE(it2 == it2);
	PRINT_EXECUTE(it2 != it2);
	PRINT_EXECUTE(it2 == it3);
	PRINT_EXECUTE(it2 != it3);
	PRINT_EXECUTE(it2 == cit);
	PRINT_EXECUTE(it2 != cit);
	std::cout	<< std::endl;

	PRINT_EXECUTE(it3 == it);
	PRINT_EXECUTE(it3 != it);
	PRINT_EXECUTE(it3 == it2);
	PRINT_EXECUTE(it3 != it2);;
	PRINT_EXECUTE(it3 == it3);
	PRINT_EXECUTE(it3 != it3);
	PRINT_EXECUTE(it3 == cit);
	PRINT_EXECUTE(it3 != cit);
	std::cout	<< std::endl;

	PRINT_EXECUTE(cit == it);
	PRINT_EXECUTE(cit != it);
	PRINT_EXECUTE(cit == it2);
	PRINT_EXECUTE(cit != it2);
	PRINT_EXECUTE(cit == it3);
	PRINT_EXECUTE(cit != it3);
	PRINT_EXECUTE(cit == cit);
	PRINT_EXECUTE(cit != cit);
	std::cout	<< std::endl;

	PRINT_EXECUTE((it2.base()));

	PRINT_EXECUTE(sizeof(ft::RB::NodeBase));
	PRINT_EXECUTE(sizeof(ft::RB::Node<int>));

//	std::cout	<< std::endl
//				<< "t1 :"
//				<< std::endl;
//	RIT	rit = v.rbegin();
//	std::cout	<< "t2 :"
//				<< std::endl;
//	RIT rit2(rit);
//	std::cout	<< "t3 :"
//				<< std::endl;
//	RIT rit3;
//
//	std::cout	<< "t4 :"
//				<< std::endl;
//	CRIT	crit(rit);
//	std::cout	<< std::endl;
//

//	std::ostringstream	oss;

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


ft::RB::Tree<TYPE, TYPE, KeyOfValue<TYPE, TYPE>, value_compare<TYPE> >	t2(test);
	test.print();
	t2.print();

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
//
//	test.test();
//
//	test.insert(-1);
//	for (int i = 0, j = SIZE / 4, k = j * 3, l = SIZE; i < SIZE / 4; ++i, ++j, --k, --l)
//	{
//		std::cout	<< "value == "
//					<< i
//					<< std::endl;
//		test.insert(k);
//		test.insert(i);
//		test.insert(j);
//		test.insert(k);
//		test.insert(l);
//	}
//	test.print();
}


//void	test	(void)
//{
//	std::cout	<< "test "
//	#ifdef ABC
//				<< "lol "
//	#endif
//				<< "\n";
//}

#ifndef NAMESPACE
# define NAMESPACE ft
#endif


//class Test
//	:public NAMESPACE::vector<int>::iterator
//{
//	public:
//		Test	(NAMESPACE::vector<int>::iterator const & it)
//			:NAMESPACE::vector<int>::iterator(it)
//		{	}
//
//
//		void	test(void)
//		{
//			std::cout	<< &(*this->_M_current)
//						<< std::endl;
//		}
//};

//int	main	(__attribute((unused)) int argc,
//			 __attribute((unused)) char * argv[])
//{
//	NAMESPACE::map<int, int>	m;
//
//	m[1] = 4;
//
//	std::cout	<< m[1]
//				<< std::endl;
//	NAMESPACE::vector<int>	v(10);
//	NAMESPACE::vector<int>::iterator	it = v.begin();
//	Test	a(it);
//
//	a.test();
//	NAMESPACE::vector<int>	v(10, 10);
//	NAMESPACE::vector<int>::const_iterator	it = v.begin();
//
//	it[0] = 4;
//
//	std::cout	<< it[0]
//				<< std::endl;


//	NAMESPACE::vector<int>	v(10);
//
//
//	std::cout	<< "-------------------- start --------------------"
//				<< std::endl;
//	NAMESPACE::vector<int>::iterator	it0,
//										it1(v.begin()),
//										it2(it1);
//
//	(void)it2;
//
//	std::vector<int>	v(10);
//	std::vector<int>::iterator	it(v.begin()),
//								ite(it.base());
//
//	std::cout	<< it.base()
//				<< std::endl
//				<< ite.base()
//				<< std::endl;
//	std::vector<int>::iterator::iterator_type	ite;
//
//	it = v.begin();
//	ite = v.end();
//
//	while (it != ite)
//	{
//		std::cout	<< *it
//					<< std::endl;
//		++it;
//	}

//	NAMESPACE::vector<int>::iterator	it;
//	try
//	{
//		std::allocator<std::string>	a;
//		std::string *				t = a.allocate(10);
//
//		
//		t[1] = "a";
//		a.construct(t + 1, "b");
//		a.construct(t + 1, "c");
//
//		std::cout	<< "t[1] = "
//					<< t[1]
//					<< std::endl;
//
//		std::vector<std::string>	v;
//
//		v.resize(10);
//
//		v.push_back("c");
//		v[0] = "a";
//
//		ft::RB::vector<int>	v;
//
//		std::cout	<< "max_size = "
//					<< v.max_size()
//					<< std::endl;
//		v.reserve(20000);
//		v.push_back(1);
//		v.push_back(1);
//		std::cout	<< "size = "
//					<< v.size()
//					<< std::endl;
//	}
//	catch (std::exception const & err)
//	{
//		std::cout	<< err.what()
//					<< std::endl;
//	}
//	
//	return (0);
//	std::vector<std::string>	v;
//
//	v.reserve(10);
//	v.push_back("a");
//	std::cout	<< v.size()
//				<< std::endl;
//	v.resize(4);
//
//	std::cout	<< v.size()
//				<< std::endl;
//
//	return (0);
//	assert(argc != 1);
//
//	test();
//
//	for (size_t i = 1;
//		 i < argc;
//		 i++)
//	{
//		std::cout	<< std::endl
//					<< "cmd "
//					<< argv[i]
//					<< " :\n";
//		system(argv[i]);
//	}
//
//
//	for (int c = 0; c < 256; c++)
//	{
//		std::cout	<< "char \'"
//					<< static_cast<char>(c)
//					<< "\'("
//					<< c
//					<< ") :\nisalnum("
//					<< std::boolalpha
//					<< static_cast<bool>(isalnum(c))
//					<< ") | isalpha("
//					<< static_cast<bool>(isalpha(c))
//					<< ") | isblank("
//					<< static_cast<bool>(isblank(c))
//					<< ") | iscntrl("
//					<< static_cast<bool>(iscntrl(c))
//					<< ") | isdigit("
//					<< static_cast<bool>(isdigit(c))
//					<< ") \nisgraph("
//					<< static_cast<bool>(isgraph(c))
//					<< ") | islower("
//					<< static_cast<bool>(islower(c))
//					<< ") | isprint("
//					<< static_cast<bool>(isprint(c))
//					<< ") | ispunct("
//					<< static_cast<bool>(ispunct(c))
//					<< ") \nisspace("
//					<< static_cast<bool>(isspace(c))
//					<< ") | isupper("
//					<< static_cast<bool>(isupper(c))
//					<< ") | isxdigit("
//					<< static_cast<bool>(isxdigit(c))
//					<< std::endl
//					<< std::endl;
//
//	}
//}
