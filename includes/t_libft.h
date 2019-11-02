#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdarg.h>
#include "libft.h"

#ifndef T_LIBFT_H
# define T_LIBFT_H

void		hexdump(void *mem, unsigned int len);
unsigned char	gen_uchar(unsigned char start, unsigned char end);
char		*gen_str(size_t len);
size_t		gen_size_t(size_t start, size_t end);
t_list		*ft_init_list(size_t n);
t_list		*ft_create_list(int num, ...);
void		ft_print_list(t_list *list);
int		ft_lstcmp(t_list *list1, t_list *list2);
int		t_ft_memset();
int		t_ft_bzero();
int		t_ft_memcpy();
int		t_ft_memccpy();
int		t_ft_memmove();
int		t_ft_memchr();
int		t_ft_memcmp();
int		t_ft_strlen();
int		t_ft_strdup();
int		t_is_function(int (*t_f)(int), int (*f)(int));
int		t_ft_strchr(char *(*t_f)(const char *, int),char *(*f)(const char *, int));
int		t_ft_strcmp();
int		t_ft_strncmp();
int		t_ft_str_cpycat(size_t (*t_f)(char *, const char *, size_t), size_t (*f)(char *, const char *, size_t));
int		t_ft_strnstr();
int		t_ft_atoi();
int		t_ft_calloc();
int		t_ft_lstnew();
int		t_ft_lstadd_front();
int		t_ft_lstsize();
int		t_ft_lstlast();
int		t_ft_lstadd_back();
int		t_ft_lstdelone();
int		t_ft_lstclear();
int		t_ft_lstiter();
int		t_ft_lstmap();
int		t_ft_substr();
int		t_ft_strjoin();
int		t_ft_strtrim();
int		t_ft_split();
int		t_ft_itoa();
int		t_ft_strmapi();
void		t_ft_putnbr_fd();

#endif
