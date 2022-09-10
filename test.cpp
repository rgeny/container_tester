#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "includes/test_Utils.hpp"

#define NDEBUG
#include <cassert>

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


class Test
	:public NAMESPACE::vector<int>::iterator
{
	public:
		Test	(NAMESPACE::vector<int>::iterator const & it)
			:NAMESPACE::vector<int>::iterator(it)
		{	}


		void	test(void)
		{
			std::cout	<< &(*this->_M_current)
						<< std::endl;
		}
};

int	main	(__attribute((unused)) int argc,
			 __attribute((unused)) char * argv[])
{
	NAMESPACE::vector<int>	v(10);
	NAMESPACE::vector<int>::iterator	it = v.begin();
	Test	a(it);

	a.test();
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
//		ft::vector<int>	v;
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
}
