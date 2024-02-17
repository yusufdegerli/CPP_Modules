CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = PhoneBook

SOURCE = Contact.cpp Main.cpp PhoneBook.cpp functions.cpp

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: clean all
