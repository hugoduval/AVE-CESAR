CC	=	g++

SRC	=	main.cpp

CPPFLAGS	=	-I ./

NAME	=	AVE

all:	$(NAME)

$(NAME):
	$(CC) -o $(NAME) $(CPPFLAGS) $(SRC)

clean:
	@rm -f $(NAME)

re:	all

.PHONY:	all	clean re