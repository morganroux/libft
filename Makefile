NAME	=	libft.a

T_NAME	=	test_libft

SRCS		=	./srcs/ft_atoi.c \
			./srcs/ft_isascii.c \
			./srcs/ft_memchr.c \
			./srcs/ft_memset.c \
			./srcs/ft_strcpy.c \
			./srcs/ft_strncat.c \
			./srcs/ft_strrchr.c \
			./srcs/ft_bzero.c \
			./srcs/ft_isdigit.c \
			./srcs/ft_memcmp.c \
			./srcs/ft_strcat.c \
			./srcs/ft_strdup.c \
			./srcs/ft_strncmp.c \
			./srcs/ft_strstr.c \
			./srcs/ft_isalnum.c \
			./srcs/ft_isprint.c \
			./srcs/ft_memcpy.c \
			./srcs/ft_strchr.c \
			./srcs/ft_strlcat.c \
			./srcs/ft_strncpy.c \
			./srcs/ft_tolower.c \
			./srcs/ft_isalpha.c \
			./srcs/ft_memccpy.c \
			./srcs/ft_memmove.c \
			./srcs/ft_strcmp.c \
			./srcs/ft_strlen.c \
			./srcs/ft_strnstr.c \
			./srcs/ft_toupper.c \
			./srcs/ft_memalloc.c

OBJS		=	${SRCS:.c=.o}

INC_PATH	=	-I./includes/

LIB_PATH	=	-L. -lft

T_SRCS		=	./tests/t_main.c

CC		=	gcc

FLAGS		=	-Wall -Wextra -Werror

${NAME}:		${OBJS}
			ar rc ${NAME} ${OBJS}

.c.o:			${SRCS}
			${CC} ${FLAGS} ${INC_PATH} -c $<  -o ${<:.c=.o}

all:			${NAME}

clean:		
			rm -f ${OBJS}

fclean:			clean
			rm -f ${NAME}

re:			fclean all

test:			${NAME}	
			${CC} ${FLAGS} ${T_SRCS} ${INC_PATH} ${LIB_PATH} -o ${T_NAME}
			./test_libft
		

