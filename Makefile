# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: warchiba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/01 12:37:10 by warchiba          #+#    #+#              #
#    Updated: 2020/08/01 17:41:54 by warchiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = includes/
LIBFUNC = libft/ft_*.c
PROCESSOR = processor.c processor_int.c processor_unsigned.c processor_hex.c processor_oct.c processor_str.c processor_char.c processor_pointer.c processor_double.c processor_int_part2.c processor_double_part2.c 
FUNC = ft_printf.c parser.c parser_part2.c $(PROCESSOR) $(LIBFUNC)
OBJ = ft_printf.o parser.o processor.o processor_int.o processor_unsigned.o processor_hex.o processor_oct.o processor_str.o processor_char.o processor_pointer.o processor_double.o processor_int_part2.o processor_double_part2.o parser_part2.o ft_*.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(FUNC) -I $(INCLUDE)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -Rf $(OBJ)

fclean: clean
	/bin/rm -Rf $(NAME)

re: fclean all
