NAME = phonebook

CC = clang++ -Wall -Wextra -Werror

SRC = ./main.cpp \
	./Contact.cpp \
	./Phonebook.cpp \
	

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o phonebook

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean $(NAME)