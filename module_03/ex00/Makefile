NAME = ClapTrap

CXX = clang++ 
CPPFLAGS = -Wall -Wextra -Werror

SRC = ./main.cpp \
	./ClapTrap.cpp \

SRC_OBJ = ./main.o \
	./ClapTrap.o \

HEADER = ./ClapTrap.hpp 

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CXX) $(SRC_OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CXX) $(CPPFLAGS) -c $<

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)

re: fclean all