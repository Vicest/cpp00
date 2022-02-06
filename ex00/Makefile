NAME=megaphone

SRCS:=megaphone.cpp
OBJS:=$(SRCS:.cpp=.o)

CC=g++
CPPFLAGS=-std=c++98 -Wall -Werror -Wextra

.PHONY: all clean ffclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

%.o : %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
