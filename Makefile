NAME = gomoku

SRCS = srcs/main.cpp \
       srcs/board_check.cpp \
       srcs/init_board.cpp \
       srcs/input_check.cpp \
       srcs/print_board.cpp \
       srcs/run.cpp

OBJS = $(SRCS:.cpp=.o)

CC = g++
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

