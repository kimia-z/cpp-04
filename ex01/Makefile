NAME = brain

CFLAGS = -Wall -Wextra -Werror -std=c++11

CPP = c++

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re