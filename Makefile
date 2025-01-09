NAME = push_swap
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror #-g -fsanitize=address
LIBFTDIR = libft/
LIBFTMAKEFILE = libft/Makefile
LIBFTHEADER = libft/libft.h
LIBFTSRC = libft/ft_isalpha.c \
	libft/ft_isdigit.c \
	libft/ft_isalnum.c \
	libft/ft_isascii.c \
	libft/ft_isprint.c \
	libft/ft_strlen.c \
	libft/ft_memset.c \
	libft/ft_bzero.c \
	libft/ft_memcpy.c \
	libft/ft_memmove.c \
	libft/ft_strlcpy.c \
	libft/ft_strlcat.c \
	libft/ft_toupper.c \
	libft/ft_tolower.c \
	libft/ft_strchr.c \
	libft/ft_strrchr.c \
	libft/ft_strncmp.c \
	libft/ft_memchr.c \
	libft/ft_memcmp.c \
	libft/ft_strnstr.c \
	libft/ft_atoi.c \
	libft/ft_calloc.c \
	libft/ft_strdup.c \
	libft/ft_substr.c \
	libft/ft_strjoin.c \
	libft/ft_strtrim.c \
	libft/ft_split.c \
	libft/ft_itoa.c \
	libft/ft_strmapi.c \
	libft/ft_striteri.c \
	libft/ft_putchar_fd.c \
	libft/ft_putstr_fd.c \
	libft/ft_putendl_fd.c \
	libft/ft_putnbr_fd.c \
	libft/get_next_line.c \
	libft/ft_lstnew_bonus.c \
	libft/ft_lstadd_front_bonus.c \
	libft/ft_lstsize_bonus.c \
	libft/ft_lstlast_bonus.c \
	libft/ft_lstadd_back_bonus.c \
	libft/ft_lstdelone_bonus.c \
	libft/ft_lstclear_bonus.c \
	libft/ft_lstiter_bonus.c \
	libft/ft_lstmap_bonus.c
LIBFTOBJ = $(LIBFTSRC:.c=.o)

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

${NAME}: ${OBJ_1} ${OBJ_2} ${LIBFTOBJ}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

${BONUS}: ${OBJ_2} ${BONUS_OBJ} ${LIBFTOBJ}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_2} -o ${BONUS} ${INCLUDE}

${LIBFT}: ${LIBFTHEADER} ${LIBFTMAKEFILE} ${LIBFTSRC}
	make -C $(LIBFTDIR)

all: ${NAME} ${BONUS} ${LIBFT}

bonus: ${BONUS}
libft: ${LIBFT}

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${BONUS_OBJ} ${NAME} ${BONUS}
	cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus libft
