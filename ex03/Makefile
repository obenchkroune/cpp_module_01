CXX          = c++
CXXFLAGS     = -Wall -Wextra -Werror -std=c++98

HEADERS      = HumanA.hpp HumanB.hpp Weapon.hpp

SRCS         = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
OBJS         = $(SRCS:.cpp=.o)

NAME         = ex03

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
