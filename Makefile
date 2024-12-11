NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/

SRC_DIR = src/

SRC_1 = src/push_swap/push_swap.c \

SRC_2 = src/push_swap/push_swap.c \

OBJ_1 = ${src_1:.c=.o}
OBJ_2 = ${src_2:.c=.o}



INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ_1) $(OBJ_2)
	make -C $(LIBFTDIR)
	${CC} ${CFLAGS} $(OBJ_1) $(OBJ_2) -o ${NAME} ${INCLUDE}

all: $(NAME)

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} $(NAME)
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re
