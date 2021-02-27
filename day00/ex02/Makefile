NAME			= testAccount
CXX				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			= tests.cpp Account.class.cpp
INCS			= Account.class.hpp
OBJS			= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCS)
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all