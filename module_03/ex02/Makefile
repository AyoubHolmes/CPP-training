NAME = FragTrap

CC = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./ClapTrap.cpp \
	./ScavTrap.cpp \
	./FragTrap.cpp \ 

SRC_OBJ = ./main.o \
	./ClapTrap.o \
	./ScavTrap.o \
	./FragTrap.o \

HEADER = ./ClapTrap.hpp ./ScavTrap.hpp

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CC) $(SRC_OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)
