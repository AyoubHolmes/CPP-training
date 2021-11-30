NAME = Form

CXX = clang++ 
CPPFLAGS = -Wall -Wextra -Werror

SRC = ./main.cpp \
	./Bureaucrat.cpp \
	./Form.cpp \
	./PresidentialPardonForm.cpp \
	./RobotomyRequestForm.cpp \
	./ShrubberyCreationForm.cpp \
	./Intern.cpp \

SRC_OBJ = ./main.o \
	./Bureaucrat.o \
	./Form.o \
	./PresidentialPardonForm.o \
	./RobotomyRequestForm.o \
	./ShrubberyCreationForm.o \
	./Intern.o \

HEADER = ./Bureaucrat.hpp \
		./Form.hpp \
		./PresidentialPardonForm.hpp \
		./RobotomyRequestForm.hpp \
		./ShrubberyCreationForm.hpp \
		./Intern.hpp \

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