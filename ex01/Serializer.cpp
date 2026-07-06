#include "Serializer.hpp"

Serializer::Serializer()
{
}


Serializer::Serializer(const Serializer &other)
{
	(void)other;
}

Serializer &Serializer::operator=(Serializer const &other)
{
	(void)other;
	if (this == &other)
		return (*this);
	return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serializer(Data *ptr)
{
	uintptr_t	return_value;
	void const		*void_pointer;
	
	void_pointer = reinterpret_cast<void const *>(ptr->get_address());
	return_value = reinterpret_cast<uintptr_t>(void_pointer);
	return (return_value);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	void	*void_pointer;
	Data	*return_value;

	void_pointer = reinterpret_cast<void *>(raw);
	return_value = reinterpret_cast<Data *>(void_pointer);
	return (return_value);
}

std::ostream	&operator<<(std::ostream &stream, Data const &other)
{
	stream << reinterpret_cast<void const *>(other.get_address());
	return (stream);
}
