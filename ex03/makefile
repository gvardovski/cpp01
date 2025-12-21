CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Unnecessary_violence
SRC =  src/HumanA.cpp \
	src/HumanB.cpp \
	src/Weapon.cpp \
	main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re