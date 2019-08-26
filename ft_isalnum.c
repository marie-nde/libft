int		ft_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		ft_isalnum(int c)
{
	if (ft_digit(c) == 1 || ft_alpha(c) == 1)
		return (1);
	return (0);
}
