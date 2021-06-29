NAME	= 	push_swap
SRCS	=	push_swap.c		\
			operations.c	\
			q_sort.c		\
			utils.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

re: clean all

clean:
	rm -f $(NAME)
