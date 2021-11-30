NAME = Convert

CXX = clang++ 
CPPFLAGS = -Wall -Wextra -Werror

SRC = ./main.cpp \
	./Parse.cpp \

SRC_OBJ = ./main.o \
	./Parse.o \

HEADER = ./Parse.hpp \

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CXX) $(CPPFLAGS) $(SRC_OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CXX) $(CPPFLAGS) -c $<

clean:
	rm -rf $(SRC_OBJ)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)

re: fclean all