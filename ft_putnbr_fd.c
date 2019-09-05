#include "libft.h"
#include <unistd.h>

void	ft_write_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		ft_write_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_write_fd((nb % 10) + '0', fd);
}
