NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/
BONUS = checker
SRC_DIR = src/

SRC_1 = src/push_swap/push_swap.c \

SRC_2 = src/push_swap/ft_error_message.c \
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

BONUS_SRC = src/checker/checker.c \
            src/checker/checker_utils.c \

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

BONUS_OBJ = ${BONUS_SRC:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

${BONUS}: ${OBJ_2} ${BONUS_OBJ}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_2} -o ${BONUS} ${INCLUDE}

all: ${NAME} ${BONUS}

bonus: ${BONUS}

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${BONUS_OBJ} ${NAME} ${BONUS}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus
