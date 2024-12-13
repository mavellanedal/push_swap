NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/

SRC_2 = src/push_swap/push_swap.c \
        src/push_swap/ft_error_message.c \
        src/push_swap/utils.c \
        src/push_swap/checks.c

OBJ_2 = ${SRC_2:.c=.o}
INCLUDE = -L ./libft -lft

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ_2)
	make -C $(LIBFTDIR)
	${CC} ${CFLAGS} $(OBJ_2) -o ${NAME} ${INCLUDE}

all: $(NAME)

clean:
	${RM} ${OBJ_2}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} $(NAME)
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
