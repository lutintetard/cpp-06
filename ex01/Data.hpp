#ifndef DATA_HPP 
# define DATA_HPP

# include <ostream>

class	Data
{
public:
	Data();
	Data(const Data &other);
	Data &operator=(Data const &other); 
	~Data();
	Data const	*get_address() const;
private:
	Data const	*object_adress;
};

std::ostream &operator<<(std::ostream &stream, Data const &other);

#endif
