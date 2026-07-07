#include "Base.hpp"
#include "Letters.hpp"

Base::~Base()
{
}

Base	*create_A(void)
{
	Base	*return_val;

	return_val = dynamic_cast<Base *>(new A());
	return (return_val);
}

Base	*create_B(void)
{
	Base	*return_val;

	return_val = static_cast<Base *>(new B());
	return (return_val);
}

Base	*create_C(void)
{
	Base	*return_val;

	return_val = static_cast<Base *>(new C());
	return (return_val);
}

bool	test_A(Base &base)
{
	try 
	{
		dynamic_cast<A&>(base);
		std::cout << "A" << std::endl;
		return (true);
	}
	catch (std::exception &e)
	{
	}
	return (false);
}

bool	test_B(Base	&base)
{
	try 
	{
		dynamic_cast<B&>(base);
		std::cout << "B" << std::endl;
		return (true);
	}
	catch (std::exception &e)
	{
	}
	return (false);
}

bool	test_C(Base &base)
{
	try
	{
		dynamic_cast<C&>(base); 
		std::cout << "C" << std::endl;
		return (true);
	}
	catch (std::exception &e)
	{
	}
	return (false);
}

Base	*generate(void)
{
	int object;
	Base	*(*tab[])() = {&create_A, &create_B, &create_C};

	object = std::rand() % 3;	
	return (tab[object]());
}

void	identify(Base &p)
{
	bool	(*tab[])(Base &) = {&test_A, &test_B, &test_C};

	for (int i = 0; i < 3; i++)
	{
		if ((*tab[i])(p) == true)
			return;
	}
}

void	identify(Base *p)
{
	if (p != NULL)
		identify(dynamic_cast<Base &>(*p));
}

