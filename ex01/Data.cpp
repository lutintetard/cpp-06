#include "Data.hpp"

Data::Data() : object_adress(this)
{
	
}


Data::Data(const Data &other)
{
	(void)other;
}

Data &Data::operator=(Data const &other)
{
	(void)other;
	if (this == &other)
		return (*this);
	return (*this);
}

Data::~Data()
{
}

Data const	*Data::get_address(void) const
{
	return (this->object_adress);
}
