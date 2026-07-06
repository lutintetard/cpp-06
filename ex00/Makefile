# -*- Makefile -*-

CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98 -g
CPPFILES=ScalarConverter.cpp\
		main.cpp
OFILES=$(CPPFILES:%.cpp=%.o)
PROGRAM=convert

all:$(PROGRAM)

$(PROGRAM) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(PROGRAM)

%.o:%.cpp
	$(CC) $< $(FLAGS) -c -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(PROGRAM)

re: clean fclean

.PHONY: all clean fclean re
