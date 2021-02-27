NAME			= phone_book
CXX				= clang++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			= main.cpp contact.cpp phone_book.cpp
INCS			= contact.hpp phone_book.hpp
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