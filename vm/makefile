SRCS = ./src/main.c ./src/args.c
INCS = ./inc
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
NAME = coreware


.c.o:
	gcc -c $(CFLAGS) $< -o ${<:.c=.o} -I$(INCS)
$(NAME) : $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)
all: $(NAME)

run:
	./$(NAME)
clean : 
	rm $(OBJS)
fclean : clean
	rm $(NAME)
re : fclean all

.PHONY: all
