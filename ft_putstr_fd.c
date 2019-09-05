#include "libft.h"
#include <unistd.h>

void	ft_char_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while (s && s[i])
	{
		ft_char_fd(s[i], fd);
		i++;
	}
}
