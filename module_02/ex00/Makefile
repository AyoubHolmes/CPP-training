NAME = Fixed

CC = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./Fixed.cpp \

SRC_OBJ = ./main.o \
	./Fixed.o \



all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(CC) $(SRC_OBJ) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)
