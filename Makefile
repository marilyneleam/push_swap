# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleam <mleam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 11:29:18 by mleam             #+#    #+#              #
#    Updated: 2021/10/15 06:14:40 by mleam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

LIBFT_D	=	libft
LIBFT_N	=	libft.a

SRCS	=	srcs/operations/push.c \
			srcs/operations/rev_rotate.c \
			srcs/operations/rotate.c \
			srcs/operations/swap.c \
			srcs/sort/sort_min.c \
			srcs/sort/sort_three.c \
			srcs/sort/sort_four.c \
			srcs/sort/sort_five.c \
			srcs/sort/sort_other.c \
			srcs/sort/is_sorted.c \
			srcs/error.c \
			srcs/index.c \
			srcs/main.c \
			srcs/parsing.c \
			srcs/other_utils.c \
			srcs/free.c

OBJS	=	$(SRCS:.c=.o)

INCS	=	includes

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@ -I $(INCS)

$(NAME):	$(OBJS) $(LIBFT_D)
			make -C $(LIBFT_D)
			cp $(LIBFT_D)/$(LIBFT_N) $(NAME)
			ar -rcs $(NAME) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT_D)/$(LIBFT_N) -o $(NAME)

all:		$(NAME)

clean:
			make clean -C $(LIBFT_D)
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C $(LIBFT_D)
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re