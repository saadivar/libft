CC=gcc
CFLAGS= -Wall -Wextra -Werror
CFILES=$(wildcard *.c)
OBJ = $(CFILES:.c=.o)
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
RM = rm -f


all: ${NAME}

${NAME}: ${OBJ}
	${LIBC} ${NAME} ${OBJ}
	#${LIBR} ${NAME}

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}