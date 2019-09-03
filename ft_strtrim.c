#include "libft.h"
#include <stdlib.h>

int		ft_count_space(char const *s)
{
	int compt;
	int i;

	i = 0;
	compt = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		compt++;
		i++;
	}
	while (s[i])
		i++;
	i--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		compt++;
		i--;
	}
	return (compt);
}

int		ft_length_str(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	int			i;
	int			j;
	int			compt;
	char		*cpy;

	i = 0;
	j = 0;
	compt = ft_count_space(s);
	if (!(cpy = (char*)malloc(sizeof(char) * ft_length_str(s) - compt + 1)))
		return (NULL);
	while (ft_space(s[i]) == 1)
		i++;
	while (ft_space(s[i]) == 0 && s[i])
	{
		cpy[j] = s[i];
		j++;
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
