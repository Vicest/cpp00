NAME=Bank

CLASS:=Account.cpp
HEAD:=$(CLASS:.cpp=.hpp)
SRCS:=tests.cpp
OBJS:=$(SRCS:.cpp=.o)
OBJS+=$(CLASS:.cpp=.o)

CC=g++
CPPFLAGS=-std=c++98 -Wall -Werror -Wextra

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS) $(HEAD)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

%.o : %.cpp
	$(CC) $(CPPFLAGS) $< -c -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
