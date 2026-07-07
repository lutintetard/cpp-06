#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>

class	A;
class	B;
class	C;

class	Base
{
public:
	virtual ~Base();
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

bool	test_A(Base &p);
bool	test_B(Base &p);
bool	test_C(Base &p);

Base	*create_A(void);
Base	*create_B(void);
Base	*create_C(void);

#endif
