# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmhlanga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/02 15:33:27 by lmhlanga          #+#    #+#              #
#    Updated: 2019/09/02 16:07:11 by lmhlanga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = push_swap.a

SRC = push/push_swap.c \
	  push/move_back.c \
	  push/solve_chunk.c \
	  push/sort_big.c \
	  push/sort_small.c \
	  check/checker.c \
	  universal/adder.c \
	  universal/ft_stack.c \
	  universal/rot_commands.c \
	  universal/swap_commands.c \
	  universal/is_dublicate_a.c
      
SRCO = *.o
              
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	@make -C includes/libft/
	@gcc -c -g $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(SRCO)
	@ranlib $(NAME)
	@gcc check/checker.c push_swap.a includes/libft/libft.a -Wall -Werror -Wextra -o checker
	@gcc push/push_swap.c push_swap.a includes/libft/libft.a -Wall -Werror -Wextra -o push_swap
clean :
	@/bin/rm -f $(SRCO)
	@/bin/rm -f includes/libft/*.o
fclean : clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f includes/libft/libft.a
	@rm checker push_swap
re : fclean all
