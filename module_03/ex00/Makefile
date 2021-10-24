NAME = Fixed

CC = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./ClapTrap.cpp \

SRC_OBJ = ./main.o \
	./ClapTrap.o \

HEADER = ./ClapTrap.hpp

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CC) $(SRC_OBJ) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)
