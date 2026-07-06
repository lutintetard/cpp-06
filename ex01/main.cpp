#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int	main(void)
{
	Data	*haha;
	Data	yoyo;

	haha = &yoyo;
	uintptr_t save;

	std::cout << haha << std::endl;
	save = Serializer::serializer(haha);
	std::cout << save << std::endl;
	std::cout << Serializer::deserialize(save) << std::endl;
	return (0);
}
