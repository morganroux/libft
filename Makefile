NAME	=	libft.a

T_NAME	=	test_libft

SRCS		=	./srcs/ft_memset.c \
			./srcs/ft_bzero.c \
			./srcs/ft_memcpy.c \
			./srcs/ft_memccpy.c \
			./srcs/ft_memmove.c \
			./srcs/ft_memchr.c \
			./srcs/ft_memcmp.c \
			./srcs/ft_strlen.c \
			./srcs/ft_isalpha.c \
			./srcs/ft_isdigit.c \
			./srcs/ft_isalnum.c \
			./srcs/ft_isprint.c \
			./srcs/ft_isascii.c \
			./srcs/ft_tolower.c \
			./srcs/ft_toupper.c \
			./srcs/ft_strdup.c \
			./srcs/ft_strchr.c \
			./srcs/ft_strrchr.c \
			./srcs/ft_strcmp.c \
			./srcs/ft_strncmp.c \
			./srcs/ft_strlcat.c \
			./srcs/ft_strlcpy.c \
			./srcs/ft_strnstr.c \
			./srcs/ft_atoi.c \
			./srcs/ft_substr.c \
			./srcs/ft_strjoin.c \
			./srcs/ft_strtrim.c \
			./srcs/ft_split.c \
			./srcs/ft_itoa.c \
			./srcs/ft_strmapi.c \
			./srcs/ft_putchar_fd.c \
			./srcs/ft_putstr_fd.c \
			./srcs/ft_putendl_fd.c \
			./srcs/ft_putnbr_fd.c \
			./srcs/ft_calloc.c \
			./srcs/bonus/ft_lstnew.c \
			./srcs/bonus/ft_lstadd_front.c \
			./srcs/bonus/ft_lstsize.c \
			./srcs/bonus/ft_lstlast.c \
			./srcs/bonus/ft_lstadd_back.c \
			./srcs/bonus/ft_lstdelone.c \
			./srcs/bonus/ft_lstclear.c \
			./srcs/bonus/ft_lstiter.c \
			./srcs/bonus/ft_lstmap.c \
			./srcs/utils/utils_list.c

OBJS		=	${SRCS:.c=.o}

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

INC_PATH	=	-I./includes/

LIB_PATH	=	-L. -lft

T_SRCS		=	./tests/t_main.c \
			./tests/generators.c \
			./tests/hexdump.c \
			./tests/t_is_function.c \
			./tests/t_ft_strchr.c \
			./tests/t_ft_strcmp.c \
			./tests/t_ft_strcpycat.c \
			./tests/t_ft_strnstr.c \
			./tests/t_ft_atoi.c \
			./tests/t_ft_calloc.c \
			./tests/t_ft_substr.c \
			./tests/t_ft_strjoin.c \
			./tests/t_ft_strtrim.c \
			./tests/t_ft_split.c \
			./tests/t_ft_lstnew.c \
			./tests/t_ft_lstadd_front.c \
			./tests/t_ft_lstsize.c \
			./tests/t_ft_lstlast.c \
			./tests/t_ft_lstadd_back.c \
			./tests/t_ft_lstdelone.c \
			./tests/t_ft_lstclear.c \
			./tests/t_ft_lstiter.c \
			./tests/t_ft_lstmap.c \
			./tests/t_ft_putnbr_fd.c

CC		=	gcc

FLAGS		=	-Wall -Wextra -Werror

${NAME}:		${OBJS}
			ar rc ${NAME} ${OBJS}

.c.o:			${SRCS} ${SRCS_BONUS}
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
		

