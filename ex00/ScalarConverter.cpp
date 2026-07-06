#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}


ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	(void)other;
	if (this == &other)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void	ScalarConverter::convert(char const *conver)
{
	double	change_val;
	std::string	to_string;

	to_string = conver;
	if (to_string == "nan")
	{
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
		return ;
	}
	try
	{
		change_val = std::strtod(to_string.c_str(), NULL);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}
	std::cout << "char: " ;
	if (change_val <= 32 || change_val >=177 || change_val == 0x8000000000000)
		std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(change_val);
	std::cout << "\nint: ";
	if (change_val < INT_MIN || change_val > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(change_val);	
	std::cout << "\nfloat: ";
	std::cout << static_cast<float>(change_val) ;
	if (static_cast<float>(change_val) == static_cast<int>(change_val))
		std::cout << ".0";
	std::cout <<"f \ndouble: ";
	std::cout << static_cast<double>(change_val);
	if (static_cast<float>(change_val) == static_cast<int>(change_val))
		std::cout << ".0";
	std::cout << std::endl;
}
