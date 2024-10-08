NAME = libftprintf.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror -c
AR = ar
ARFLAGS = rcs
SRC = 
OBJ = 

all: $(NAME)

$(NAME): 

%.o: %.c
	$(CC) $(CCFLAGS) -

clean: 

fclean:

re: fclean all