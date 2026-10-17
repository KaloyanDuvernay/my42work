NAME = get_next_line.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -f

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
SRCS = get_next_line.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft_build
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

libft_build:
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c get_next_line.h $(LIBFT_DIR)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re libft_build
