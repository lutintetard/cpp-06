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
	static void	convert(char const *conver);
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &other);
	ScalarConverter &operator=(ScalarConverter const &other); 
	~ScalarConverter();
};

#endif
