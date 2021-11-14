NAME = DiamondTrap

CXX = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./ClapTrap.cpp \
	./ScavTrap.cpp \
	./FragTrap.cpp \
	./DiamondTrap.cpp \

SRC_OBJ = ./main.o \
	./ClapTrap.o \
	./ScavTrap.o \
	./FragTrap.o \
	./DiamondTrap.o \

HEADER = ./ClapTrap.hpp ./ScavTrap.hpp ./FragTrap.hpp ./DiamondTrap.hpp 

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CXX) $(CFLAGS) $(SRC_OBJ) -o $(NAME)

clean:
	rm -rf $(SRC_OBJ)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)
