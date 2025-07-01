CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = brainz

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)
fclean: clean
	rm -f $(OBJS)
re: fclean all

.PHONY: all clean fclean re