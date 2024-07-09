CXX          = c++
CXXFLAGS     = -Wall -Wextra -Werror -std=c++98

HEADERS      =

SRCS         = main.cpp
OBJS         = $(SRCS:.cpp=.o)

NAME         = ex02

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
