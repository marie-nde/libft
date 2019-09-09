#include "libft.h"
#include <stdlib.h>

int		ft_stringlen(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	i = 0;
	if (!(map = (char*)malloc(sizeof(char) * ft_stringlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
