#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "This program requires one parameter" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
