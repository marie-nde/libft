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
	if (ac == 3)
	{
		char *cpy = ft_strdup(av[1]);
		char *cpy2 = ft_strdup(av[2]);
		char *cpy3 = ft_strdup(av[1]);
		char *cpy4 = ft_strdup(av[2]);
		char *cat = ft_strdup(av[1]);
		char *cat2 = ft_strdup(av[2]);
		char *cat3 = ft_strdup(av[1]);
		char *cat4 = ft_strdup(av[2]);

		write(1, "### ft_strcmp ###\n", 18);
		write(1, "Test with the first and second argument.\n", 41);
		write(1, "Result expected : ", 18);
		printf("%d\n", strcmp(av[1], av[2]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_strcmp(av[1], av[2]));

		write(1, "### ft_strcpy ###\n", 18);
		write(1, "Test with the first and second argument.\n", 41);
		write(1, "Result expected : ", 18);
		printf("%s\n", strcpy(cpy3, cpy4));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_strcpy(cpy, cpy2));

		write(1, "### ft_strcat ###\n", 18);
		write(1, "Test with the first and second argument.\n", 41);
		write(1, "Result expected : ", 18);
		printf("%s\n", strcat(cat, cat2));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_strcat(cat3, cat4));
	}
	if (ac == 4)
	{
		write(1, "### ft_strncmp ###\n", 19);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
		printf("%d\n", strncmp(av[1], av[2], atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	}
}
