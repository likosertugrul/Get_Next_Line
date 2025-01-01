NAME = geto.a

FLAG =

SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

$(NAME) : 
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)

all : $(NAME)

clean : 
	/bin/rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all

run : re 
	cc $(FLAG) main.c geto.a
	./a.out

push : 
	git add .
	git commit -m "To infinity and beyond"
	git push

.PHONY : all clean fclean re 	






	
