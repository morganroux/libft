int	ft_tolower(int c)
{
	return (('A' <= c && c <= 'Z') ? (c - 'A' + 'a') : c);
}
