NAME = FragTrap

CXX = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./ClapTrap.cpp \
	./ScavTrap.cpp \
	./FragTrap.cpp \ 

SRC_OBJ = ./main.o \
	./ClapTrap.o \
	./ScavTrap.o \
	./FragTrap.o \

HEADER = ./ClapTrap.hpp ./ScavTrap.hpp ./FragTrap.hpp

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CXX) $(SRC_OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CXX) $(CPPFLAGS) -c $<

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)
