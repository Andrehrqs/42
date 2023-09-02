# conjunto dos nomes dos arquivos fonte que serão usados para criar os arquivos objeto.
SOURCEFILES	= 	ft_printf.c ft_putchar.c ft_unsgint.c\
				ft_putstr.c ft_puthexa.c ft_putnbr.c ft_putadd.c

# objects serve para uma modificacao de sufixo dos arquivos da source
OBJECTS	= $(SOURCEFILES:.c=.o)

NAME	= libftprintf.a

# define o compiler que vai ser usado
COMPILER		= cc

# RM é o comando para remover arquivos. -f é usado para evitar que o comando exiba mensagens de erro caso o arquivo não exista.
RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

# define os alvos (targets) que são considerados "fictícios"
.PHONY: all, clean, fclean, re

# quando executar make all, o alvo all depende do arquivo de saída $(NAME) (que é sua biblioteca)
all: $(NAME) 

# biblioteca $(NAME) depende dos arquivos de objeto $(OBJECTS). A linha seguinte (ar -rcs ...) compila esses objetos em um arquivo de biblioteca estática.
${NAME} : ${OBJECTS}
	ar -rcs $(NAME) $(OBJECTS)

# informa como compilar arquivos de origem (.c) em arquivos de objeto (.o). O $< se refere ao arquivo de origem e $@ ao arquivo de destino (objeto).
%.o : %.c
	${COMPILER} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJECTS} 

fclean: clean
	${RM} ${NAME}

re: fclean all
