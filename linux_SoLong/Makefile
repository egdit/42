
NAME = so_long


SRCS = sources/check_map.c \
	sources/image.c \
	sources/map.c \
	sources/move.c \
	sources/so_long.c \
	get_next_line/get_next_line.c \
	get_next_line/get_next_line_utils.c 

CFLAGS = -Wall -Wextra -Werror
LINKS = -framework OpenGL -framework Appkit -L mlx/ -lmlx

LIBDIR = mlx/
CC = gcc -g
OBJS = $(SRCS:.c=.o)

all: ${NAME}

$(NAME): libft get_next_line mlx $(OBJS)
	${CC} ${CFLAGS} ${SRCS} libft/libft.a ${LINKS} -o ${NAME}
	

libft:
	make -C libft

mlx:
	make -C $(LIBDIR)

clean:
	make clean -C libft
	make clean -C $(LIBDIR)
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -fr ${NAME} ${LIB}

re: fclean all

.PHONY: re fclean clean all libft mlx