#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		write(1, "### ft_strlen ###\n", 18);
		write(1, "Test with the first argument.\n", 30);
		write(1, "Result expected : ", 18);
		printf("%ld\n", strlen(av[1]));
		write(1, "Your result : ", 14);
		printf("%ld\n\n", ft_strlen(av[1]));

		write(1, "### ft_strdup ###", 18);
		write(1, "Test with the first argument.\n", 30);
		write(1, "Result expected : ", 18);
		printf("%s\n", strdup(av[1]));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_strdup(av[1]));

		write(1, "### ft_atoi ###", 15);
		write(1, "Test with the first argument.\n", 30);
		write(1, "Result expected : ", 18);
		printf("%d\n", atoi(av[1]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_atoi(av[1]));

		write(1, "### ft_isalpha ###\n", 19);
		write(1, "Test with the first argument.\n", 30);
		write(1, "Result expected : ", 18);
		printf("%d\n", isalpha(atoi(av[1])));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isalpha(atoi(av[1])));

		write(1, "### ft_isdigit ###\n", 19);
		write(1, "Test with the first argument.\n", 30);
		write(1, "Result expected : ", 18);
		printf("%d\n", isdigit(atoi(av[1])));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isdigit(atoi(av[1])));

		write(1, "### ft_isalnum ###\n", 19);
		write(1, "Test with the first argument.\n", 30);
		write(1, "Result expected : ", 18);
		printf("%d\n", isalnum(atoi(av[1])));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isalnum(atoi(av[1])));
	}
}
