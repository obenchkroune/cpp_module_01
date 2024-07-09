CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98

HEADERS			=	Zombie.hpp

SRCS			=	Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJS			=	$(SRCS:.cpp=.o)

NAME			=	ex00

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJS)
