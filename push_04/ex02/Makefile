NAME = a.out

CXX = clang++
CPPFlAG = -Wall -Wextra -Werror

SRC =	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp\

OBJ = $(SRC:.cpp=.o)

HEADERS = Animal.hpp\
			Dog.hpp\
			Cat.hpp\
			Brain.hpp

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CXX) -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) -Wall -Wextra -Werror -std=c++98 -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)