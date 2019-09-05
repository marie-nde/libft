#include "libft.h"
#include <stdlib.h>

/*not working*/

int		ft_count(int n)
{
	int compt;

	compt = 0;
	while (n > 9)
	{
		n = n / 10;
		compt++;
	}
	return (compt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n >= 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_count(n) + 1)))
			return (NULL);
	}
	if (n < 0)
	{
		if (!(str = (char*)malloc(sizeof(char) * ft_count(n * -1) + 2)))
			return (NULL);
		n = n * -1;
		str[0] = '-';
	}
	i = ft_count(n) + 1;
	str[i + 1] = '\0';
	while (n > 9)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	str[i] = (n % 10) + '0';
	return (str);
}
