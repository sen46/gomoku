NAME = gomoku.a

SRCS = srcs/main.cpp \
	   srcs/board_check.cpp \
	   srcs/init_board.cpp \
	   srcs/input_check.cpp \
	   srcs/print_board.cpp \
	   srcs/run.cpp

OBJS = $(SRCS:.cpp = .o)

CC = g++

CFLAG = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

.cpp.o:
		$(CC) -cpp $ < -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAMElssssa

re: fclean all

