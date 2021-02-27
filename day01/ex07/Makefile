NAME			= replace
CXX				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp
INCS			= 
OBJS			= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS) $(INCS)
	$(CXX) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all