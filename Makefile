# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalissa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 12:17:17 by aalissa           #+#    #+#              #
#    Updated: 2023/11/09 19:34:33 by aalissa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra 
FILE_NAME = libft.a

ALL_FILES =	ft_strrchr.c	ft_lstnew.c	ft_calloc.c	ft_isalnum.c	ft_strlcat.c	ft_strmapi.c	ft_strchr.c	ft_isprint.c	ft_strtrim.c	ft_isascii.c	ft_lstsize.c	ft_strncmp.c	ft_lstadd_back.c	ft_memcmp.c	ft_tolower.c	ft_split.c	ft_putstr_fd.c	ft_isdigit.c	ft_substr.c	ft_lstlast.c	ft_putnbr_fd.c	ft_lstdelone.c	ft_toupper.c	ft_lstmap.c	ft_memmove.c	ft_memcpy.c	ft_strlen.c	ft_strnstr.c	ft_lstclear.c	ft_strlcpy.c	ft_atoi.c	ft_memchr.c	ft_putchar_fd.c	ft_memset.c	ft_putendl_fd.c	ft_itoa.c	ft_strjoin.c	ft_bzero.c	ft_lstadd_front.c	ft_lstiter.c	ft_strdup.c	ft_striteri.c	ft_isalpha.c	ft_strcmp.c

SRC_FILES = $(filter-out ft_lst%.c, $(ALL_FILES))
OBJ_FILES = $(patsubst %.c, %.o, $(SRC_FILES))
BONUS_OBJS = $(patsubst %.c, %.o, $(filter ft_lst%.c, $(ALL_FILES)))


all: $(FILE_NAME)

$(FILE_NAME): $(OBJ_FILES)
	ar rcs $@ $^

bonus: $(OBJ_FILES) $(BONUS_OBJS)
	ar rcs $(FILE_NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_FILES) $(BONUS_OBJS)

fclean: clean
	rm -f $(FILE_NAME)

re: fclean all

.PHONY: all clean fclean re bonus
