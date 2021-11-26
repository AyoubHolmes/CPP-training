NAME = Form

CXX = clang++ 
CPPFLAGS = -Wall -Wextra -Werror

SRC = ./main.cpp \
	./Bureaucrat.cpp \
	./Form.cpp 

SRC_OBJ = ./main.o \
	./Bureaucrat.o \
	./Form.o \

HEADER = ./Bureaucrat.hpp \
		./Form.hpp

all: $(NAME)

$(NAME): $(SRC_OBJ) $(HEADER)
	$(CXX) $(CPPFLAGS) $(SRC_OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CXX) $(CPPFLAGS) -c $<

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME) $(SRC_OBJ)

re: fclean all