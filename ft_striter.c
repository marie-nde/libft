#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	int i;

	i = 0;
	while (s && f && s[i])
	{
		f(&s[i]);
		i++;
	}
}
