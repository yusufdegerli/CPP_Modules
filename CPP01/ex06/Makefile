CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = harlFilter

SOURCE = main.cpp Harl.cpp

OBJ = $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: clean all
