
CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = std_conatiners
NAME_FT = ft_conatiners

all: $(NAME) $(NAME_FT)

$(NAME): 
	$(CC) $(FLAGS) -I./ -D NAMESPACE=std main.cpp -o $(NAME) 

$(NAME_FT): 
	$(CC) $(FLAGS) -I./ -D NAMESPACE=ft  main.cpp -o $(NAME_FT)


fclean : 
	@rm -f $(NAME) $(NAME_FT)

re : fclean all

.PHONY: re fclean all bonus