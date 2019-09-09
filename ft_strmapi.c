#include "libft.h"
#include <stdlib.h>

int		ft_lenalloc(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	i = 0;
	if (!(map = (char*)malloc(sizeof(char) * ft_lenalloc(s) + 1)))
		return (NULL);
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
