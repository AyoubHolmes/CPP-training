NAME = ex03

CC = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./HumanA.cpp \
	./HumanA.hpp \
	./HumanB.cpp \
	./HumanB.hpp \
	./Weapon.cpp \
	./Weapon.hpp \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)
