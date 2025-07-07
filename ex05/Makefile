CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

INFILES = main.cpp Harl.cpp
OBJFILES = $(INFILES:.cpp=.o)

NAME = Harl_2.0

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CXX) $(CXXFLAGS) $(OBJFILES) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
