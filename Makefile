# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sniemela <sniemela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 13:06:45 by sniemela          #+#    #+#              #
#    Updated: 2024/05/06 11:12:01 by sniemela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_putstr_fd.c \
		  ft_split.c \
		  ft_strchr.c \
		  ft_strdup.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strlen.c \
		  ft_strmapi.c \
		  ft_strncmp.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strtrim.c \
		  ft_substr.c \
		  ft_tolower.c \
		  ft_toupper.c \

BON_SRCS = ft_lstadd_back_bonus.c \
		   ft_lstadd_front_bonus.c \
		   ft_lstclear_bonus.c \
		   ft_lstdelone_bonus.c \
		   ft_lstiter_bonus.c \
		   ft_lstlast_bonus.c \
		   ft_lstmap_bonus.c \
		   ft_lstnew_bonus.c \
		   ft_lstsize_bonus.c \

CC = cc

OBJS = $(SOURCES:.c=.o)

OBJS_BONUS = $(BON_SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	ar rcs $@ $^

bonus: .bonus

.bonus: $(NAME) $(OBJS_BONUS)
	ar rcs $(NAME) $^
	@touch .bonus

all: $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
