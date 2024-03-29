# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acosta-h <acosta-h@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 18:41:55 by acosta-h          #+#    #+#              #
#    Updated: 2023/05/12 17:24:51 by acosta-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c 
BSOURCES = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# constrói o arquivo libft.a. Dependente do alvo $(NAME).
all: $(NAME)

# constrói a biblioteca principal 
$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

# constrói a biblioteca com as funções bônus libft.a. Dependente
bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

# Regra genérica para compilar um arquivo fonte .c em um arquivo objeto .o.
%.o: %.c
	$(CC) -c $(CFLAGS) $?
# remove os arquivos objeto gerados ($(OBJECTS) e $(BOBJECTS)).
clean:
	rm -f $(OBJECTS) $(BOBJECTS)

# remove os arquivos objeto gerados e o arquivo da biblioteca ($(OBJECTS), $(BOBJECTS) e $(NAME)).
fclean: clean
	rm -f $(NAME)

# remove todos os arquivos gerados e reconstrói a biblioteca (fclean e all).
re: fclean all

# Especifica que os alvos all, bonus, clean, fclean e re não correspondem a arquivos reais.
.PHONY: all bonus clean fclean re