SRC = main.cpp ScalarConverter.cpp
OBJS = $(SRC=.o:.cpp)
NAME = Scalar
CC = c++ -std=c++98
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

%.o : %.cpp ScalarConverter.hpp
	$(CC) $(CFLAGS) $(SRC) -c $< -o $@

re : fclean all

clean : 
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
