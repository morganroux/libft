#include "t_libft.h"

void	print_test(int r)
{
	if (r != 0)
	{
		printf(RED "FAIL %d\n" RESET, r);
		getchar();
	}
	else
		printf(GREEN "SUCCESS\n" RESET);
}

int	main()
{
	printf(LONGLINE CYAN "\nFonctions de base\n" RESET LONGLINE"\n");


	printf(SINGLELINE CYAN "ft_memset()" RESET SINGLELINE "\n");
	print_test(t_ft_memset());
	printf(SINGLELINE CYAN "ft_bzero()" RESET SINGLELINE "\n");
	print_test(t_ft_bzero());
	printf(SINGLELINE CYAN "ft_memcpy()" RESET SINGLELINE "\n");
	print_test(t_ft_memcpy());
	printf(SINGLELINE CYAN "ft_memccpy()" RESET SINGLELINE "\n");
	print_test(t_ft_memccpy());
	printf(SINGLELINE CYAN "ft_memmove()" RESET SINGLELINE "\n");
	print_test(t_ft_memmove());
	printf(SINGLELINE CYAN "ft_memchr()" RESET SINGLELINE "\n");
	print_test(t_ft_memchr());
	printf(SINGLELINE CYAN "ft_memcmp()" RESET SINGLELINE "\n");
	print_test(t_ft_memcmp());
	printf(SINGLELINE CYAN "ft_strlen()" RESET SINGLELINE "\n");
	print_test(t_ft_strlen());
	printf(SINGLELINE CYAN "ft_isalpha()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isalpha, &isalpha));
	printf(SINGLELINE CYAN "ft_isdigit()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isdigit, &isdigit));
	printf(SINGLELINE CYAN "ft_isalnum()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isalnum, &isalnum));
	printf(SINGLELINE CYAN "ft_isascii()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isascii, &isascii));
	printf(SINGLELINE CYAN "ft_isprint()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_isprint, &isprint));
	printf(SINGLELINE CYAN "ft_toupper()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_toupper, &toupper));
	printf(SINGLELINE CYAN "ft_tolower()" RESET SINGLELINE "\n");
	print_test(t_is_function(&ft_tolower, &tolower));
	printf(SINGLELINE CYAN "ft_strchr()" RESET SINGLELINE "\n");
	print_test(t_ft_strchr(&ft_strchr, strchr));
	printf(SINGLELINE CYAN "ft_strrchr()" RESET SINGLELINE "\n");
	print_test(t_ft_strchr(&ft_strrchr, &strrchr));
	printf(SINGLELINE CYAN "ft_strcmp()" RESET SINGLELINE "\n");
	print_test(t_ft_strcmp());
	printf(SINGLELINE CYAN "ft_strncmp()" RESET SINGLELINE "\n");
	print_test(t_ft_strncmp());
	printf(SINGLELINE CYAN "ft_strlcpy()" RESET SINGLELINE "\n");
	print_test(t_ft_str_cpycat(&ft_strlcpy, &strlcpy));
	printf(SINGLELINE CYAN "ft_strlcat()" RESET SINGLELINE "\n");
	print_test(t_ft_str_cpycat(&ft_strlcat, strlcat));
	printf(SINGLELINE CYAN "ft_strnstr()" RESET SINGLELINE "\n");
	print_test(t_ft_strnstr());	
	printf(SINGLELINE CYAN "ft_atoi()" RESET SINGLELINE "\n");
	print_test(t_ft_atoi());
	printf(SINGLELINE CYAN "ft_strdup()" RESET SINGLELINE "\n");
	print_test(t_ft_strdup());
	printf(SINGLELINE CYAN "ft_calloc()" RESET SINGLELINE "\n");
	print_test(t_ft_calloc());


	printf(LONGLINE CYAN "\nFonctions complémentaires\n" RESET LONGLINE"\n");


	printf(SINGLELINE CYAN "ft_substr()" RESET SINGLELINE "\n");
	print_test(t_ft_substr());
	printf(SINGLELINE CYAN "ft_strjoin()" RESET SINGLELINE "\n");
	print_test(t_ft_strjoin());
	printf(SINGLELINE CYAN "ft_strtrim" RESET SINGLELINE "\n");
	print_test(t_ft_strtrim());
	printf(SINGLELINE CYAN "ft_split" RESET SINGLELINE "\n");
	print_test(t_ft_split());
	printf(SINGLELINE CYAN "ft_itoa" RESET SINGLELINE "\n");
	print_test(t_ft_itoa());
	printf(SINGLELINE CYAN "ft_strmapi" RESET SINGLELINE "\n");
	print_test(t_ft_strmapi());

	printf(LONGLINE CYAN "\nFonctions de listes\n" RESET LONGLINE"\n");


	printf(SINGLELINE CYAN "ft_lstnew()" RESET SINGLELINE "\n");
	print_test(t_ft_lstnew());
	printf(SINGLELINE CYAN "ft_lstadd_front()" RESET SINGLELINE "\n");
	print_test(t_ft_lstadd_front());
	printf(SINGLELINE CYAN "ft_lstsize()" RESET SINGLELINE "\n");
	print_test(t_ft_lstsize());
	printf(SINGLELINE CYAN "ft_lstlast()" RESET SINGLELINE "\n");
	print_test(t_ft_lstlast());
	printf(SINGLELINE CYAN "ft_lstadd_back()" RESET SINGLELINE "\n");
	print_test(t_ft_lstadd_back());
	printf(SINGLELINE CYAN "ft_lstdelone()" RESET SINGLELINE "\n");
	print_test(t_ft_lstdelone());
	printf(SINGLELINE CYAN "ft_lstclear()" RESET SINGLELINE "\n");
	print_test(t_ft_lstclear());
	printf(SINGLELINE CYAN "ft_lstiter()" RESET SINGLELINE "\n");
	print_test(t_ft_lstiter());
	printf(SINGLELINE CYAN "ft_lstmap()" RESET SINGLELINE "\n");
	print_test(t_ft_lstmap());


	printf(LONGLINE CYAN "\nFonctions d'affichage\n" RESET LONGLINE"\n");
	
	
	printf(SINGLELINE CYAN "ft_putchar_fd()" RESET SINGLELINE "\n");
	ft_putchar_fd('O', 1);
	ft_putchar_fd('K', 1);
	ft_putchar_fd('\n', 1);
	printf(SINGLELINE CYAN "ft_putstr_fd()" RESET SINGLELINE "\n");
	ft_putstr_fd("SUCCESS\n", 1);
	printf(SINGLELINE CYAN "ft_putendl_fd()" RESET SINGLELINE "\n");
	ft_putendl_fd("SUCCESS", 1);
	printf(SINGLELINE CYAN "ft_putnbr_fd()" RESET SINGLELINE "\n");
	t_ft_putnbr_fd();


	return (0);
}
