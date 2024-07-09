CXX          = c++
CXXFLAGS     = -Wall -Wextra -Werror -std=c++98

HEADERS      = Sed.hpp

SRCS         = Sed.cpp main.cpp
OBJS         = $(SRCS:.cpp=.o)

NAME         = ex04

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
