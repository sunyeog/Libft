NAME = libft.a
CC = cc
CFLAG = -Werror -Wextra -Wall
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c
OBJ = ${SRC:.c=.o}

all: ${NAME}

%.o : %.c
	$(CC) $(CFLAG) -c $< -o ${<:.c=.o}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
