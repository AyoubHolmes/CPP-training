NAME = Polymorphism

CC = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./Animal.cpp \
	./Dog.cpp \
	./Cat.cpp \

SRC_OBJ = ./main.o \
	./Animal.o \
	./Dog.o \
	./Cat.o \


HEADER = ./Dog.hpp ./Cat.hpp ./Animal.hpp

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CC) $(SRC_OBJ) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)
