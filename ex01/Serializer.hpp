#ifndef SERIALIZER_HPP 
# define SERIALIZER_HPP

# include <stdint.h>
# include <ostream>
# include "Data.hpp"

class	Data;

class	Serializer
{
public:
	static uintptr_t	serializer(Data *ptr);
	static Data	*deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer &other);
	Serializer &operator=(Serializer const &other); 
	~Serializer();
};

std::ostream &operator<<(std::ostream stream, Serializer const &other);

#endif
