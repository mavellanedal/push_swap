NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

LIBFTDIR = libft/
LIBFT_LIB = libft/libft.a

PRINTF_DIR = ft_printf/
PRINTF_LIB = ft_printf/libftprintf.a

OBJ_DIR = obj/
HEADER = includes/push_swap.h

SRC_2 = src/push_swap/push_swap.c \
        src/push_swap/ft_error_message.c \
        src/push_swap/utils.c \
        src/push_swap/checks.c \
        src/push_swap/ft_add_back.c \
        src/push_swap/ft_free.c \
        src/push_swap/ft_new_stack.c \
        src/push_swap/lst_utils.c \
        src/push_swap/ft_check_sorted.c \
        src/push_swap/swaps.c \
        src/push_swap/rotates.c \
        src/push_swap/ft_rrr.c \
        src/push_swap/pushes.c \
        src/push_swap/ft_sort.c \
        src/push_swap/ft_sort_three_num.c \
        src/push_swap/solver_utils.c \
        src/push_swap/ft_rotate_type.c \
        src/push_swap/lst_utils2.c \
        src/push_swap/ft_rotate_and_push.c \
        src/push_swap/solver_utils2.c

OBJ_2 = ${SRC_2:.c=.o}

INCLUDE_LIBFT = -L ./libft -lft
INCLUDE_PRINTF = -L ./ft_printf -lftprintf

all: make_libft make_printf $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJ_2) $(LIBFT_LIB) $(PRINTF_LIB) Makefile $(HEADER)
	${CC} ${CFLAGS} $(OBJ_2) -o ${NAME} ${INCLUDE_LIBFT} ${INCLUDE_PRINTF}

make_libft:
	make -C $(LIBFTDIR)

make_printf: make_libft
	make -C $(PRINTF_DIR)

clean:
	${RM} ${OBJ_2}
	cd $(LIBFTDIR) && $(MAKE) clean
	cd $(PRINTF_DIR) && $(MAKE) clean

fclean: clean
	${RM} $(NAME)
	cd $(LIBFTDIR) && $(MAKE) fclean
	cd $(PRINTF_DIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re make_libft make_printf
