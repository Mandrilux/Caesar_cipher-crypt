NAME	=	caesar 

SRC	=	main.c \
		display.c \
		function.c \
		str.c \
		free.c
INC_DIR	=	include

OBJ	=	$(SRC:.c=.o)

CC	=	/usr/bin/gcc

CFLAGS	=	-W -Wall -Wextra -ansi -pedantic -O3 -g

CFLAGS  +=      -I$(INC_DIR)

RM	=	rm -f
ECHO	=	echo -e

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)
		@$(ECHO) '\033[0;32m> Caesar Compiled\033[0m'

clean	:
		-@$(RM) $(OBJ)
		-@$(RM) *~
		-@$(RM) \#*#
		@$(ECHO) '\033[0;31m> Directory cleaned\033[0m'


fclean	:	clean
		-@$(RM) $(NAME)
		@$(ECHO) '\033[0;31m> Remove executable\033[0m'

re	:	fclean all

.PHONY	:	all clean fclean re
