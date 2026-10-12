# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaloyanduvernay <kaloyanduvernay@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/25 16:58:09 by kaloyanduve       #+#    #+#              #
#    Updated: 2026/10/12 21:52:42 by kaloyanduve      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_SRCS = $(wildcard $(LIBFT_DIR)/*.c) \
			 $(wildcard $(LIBFT_DIR)/*.h) \
			 $(LIBFT_DIR)/Makefile

SRCS = ft_printf.c \
	   ft_putstr.c \
	   ft_putunsigned.c \
	   ft_puthex.c \
	   ft_putptr.c

BONUS_SRCS = ft_flags_bonus.c \
			 ft_width_bonus.c \
			 ft_precision_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT): $(LIBFT_SRCS)
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: .bonus

.bonus: $(LIBFT) $(OBJS) $(BONUS_OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	touch .bonus

clean:
	rm -f $(OBJS) $(BONUS_OBJS) .bonus
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all bonus clean fclean re