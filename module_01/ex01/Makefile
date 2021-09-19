NAME = zombie

CC = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./Zombie.cpp \
	./ZombieHorde.cpp \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)
