# -*- Makefile -*-

CC=c++
FLAGS=-Wall -Wextra -Werror -std=c++98 -g
CPPFILES=Data.cpp\
		Serializer.cpp\
		main.cpp
OFILES=$(CPPFILES:%.cpp=%.o)
PROGRAM=serial

all:$(PROGRAM)

$(PROGRAM) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(PROGRAM)

%.o:%.cpp
	$(CC) $< $(FLAGS) -c -o $@

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re
