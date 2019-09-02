#include "libft.h"
#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s && s[i])
	{
		ft_char(s[i]);
		i++;
	}
}
