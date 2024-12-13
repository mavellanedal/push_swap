NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
LIBFT_LIB = libft/libft.a
OBJ_DIR = obj/
HEADER = includes/push_swap.h


SRC_2 = src/push_swap/push_swap.c \
        src/push_swap/ft_error_message.c \
        src/push_swap/utils.c \
        src/push_swap/checks.c \
		src/push_swap/ft_add_back.c \
		src/push_swap/ft_free.c \
		src/push_swap/ft_new_stack.c

OBJ_2 = ${SRC_2:.c=.o}
INCLUDE_LIBFT = -L ./libft -lft

all: make_libft $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ_2) Makefile $(LIBFT_LIB) $(HEADER)
	make -C $(LIBFTDIR)
	${CC} ${CFLAGS} $(OBJ_2) -o ${NAME} ${INCLUDE_LIBFT}

make_libft:
	make -C $(LIBFTDIR)

clean:
	${RM} ${OBJ_2}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} $(NAME)
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
