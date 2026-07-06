#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <climits>
# include <cstdlib>

class	ScalarConverter
{
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(ScalarConverter const &other); 
	~ScalarConverter();
	static void	convert(char const *conver);
private:
};

#endif
