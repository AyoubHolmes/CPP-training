NAME = EX00

CXX = c++ 
CPPFLAGS = -Wall -Wextra -Werror

SRC = ./main.cpp \

SRC_OBJ = ./main.o \

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(CXX) $(CPPFLAGS) $(SRC_OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CPPFLAGS) -c $<

clean:
	rm -rf $(SRC_OBJ)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)

re: fclean all