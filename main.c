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
		write(1, "Test with the first character of the first argument.\n", 53);
		write(1, "Result expected : ", 18);
		printf("%d\n", isalpha(av[1][0]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isalpha(av[1][0]));

		write(1, "### ft_isdigit ###\n", 19);
		write(1, "Test with the first character of the first argument.\n", 53);
		write(1, "Result expected : ", 18);
		printf("%d\n", isdigit(av[1][0]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isdigit(av[1][0]));

		write(1, "### ft_isalnum ###\n", 19);
		write(1, "Test with the first character of the first argument.\n", 53);
		write(1, "Result expected : ", 18);
		printf("%d\n", isalnum(av[1][0]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isalnum(av[1][0]));

		write(1, "### ft_isascii ###\n", 19);
		write(1, "Test with the first character of the first argument.\n", 53);
		write(1, "Result expected : ", 18);
		printf("%d\n", isascii(av[1][0]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isascii(av[1][0]));

		write(1, "### ft_isprint ###\n", 19);
		write(1, "Test with the first character of the first argument.\n", 53);
		write(1, "Result expected : ", 18);
		printf("%d\n", isprint(av[1][0]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_isprint(av[1][0]));

		write(1, "### ft_toupper ###\n", 19);
		write(1, "Test with the first character of the first argument.\n", 53);
		write(1, "Result expected : ", 18);
		printf("%d = %c\n", toupper(av[1][0]), av[1][0]);
		write(1, "Your result : ", 14);
		printf("%d = %c\n\n", ft_toupper(av[1][0]), av[1][0]);

		write(1, "### ft_tolower ###\n", 19);
		write(1, "Test with the first character of the first argument.\n", 53);
		write(1, "Result expected : ", 18);
		printf("%d = %c\n", tolower(av[1][0]), av[1][0]);
		write(1, "Your result : ", 14);
		printf("%d = %c\n\n", ft_tolower(av[1][0]), av[1][0]);
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

		write(1, "### ft_strstr ###\n", 18);
		write(1, "Test with the first and second argument.\n", 41);
		write(1, "Result expected : ", 18);
/*		printf("%s\n", strstr(av[1], av[2]));*/
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_strstr(av[1], av[2]));
	}
	if (ac == 4)
	{
		char *ncpy = ft_strdup(av[1]);
		char *ncpy2 = ft_strdup(av[2]);
		char *ncpy3 = ft_strdup(av[1]);
		char *ncpy4 = ft_strdup(av[2]);
		char *set = ft_strdup(av[1]);
		char *set2 = ft_strdup(av[1]);
		char *memcpy1 = ft_strdup(av[1]);
		char *memcpy2 = ft_strdup(av[2]);
		char *move = ft_strdup(av[1]);
		char *move2 = ft_strdup(av[2]);
		char *move3 = ft_strdup(av[1]);
		char *move4 = ft_strdup(av[2]);
		char *chr = ft_strdup(av[1]);
		char *chr2 = ft_strdup(av[1]);

		write(1, "### ft_strncmp ###\n", 19);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
		printf("%d\n", strncmp(av[1], av[2], atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_strncmp(av[1], av[2], atoi(av[3])));

		write(1, "### ft_strncpy ###\n", 19);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
		printf("%s\n", strncpy(ncpy, ncpy2, atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_strncpy(ncpy3, ncpy4, atoi(av[3])));

		write(1, "### ft_strnstr ###\n", 19);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
	/*	printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));*/
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_strnstr(av[1], av[2], atoi(av[3])));

		write(1, "### ft_memset ###\n", 18);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
		printf("%s\n", memset(set, av[2][0], atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_memset(set2, av[2][0], atoi(av[3])));

		write(1, "### ft_memcpy ###\n", 18);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
		printf("%s\n", memcpy(memcpy1, memcpy2, atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_memcpy(memcpy1, memcpy2, atoi(av[3])));

		write(1, "### ft_memmove ###\n", 19);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
		printf("%s\n", memmove(move, move2, atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_memmove(move3, move4, atoi(av[3])));

		write(1, "### ft_memchr ###\n", 18);
		write(1, "Test with the first, second and third argument.\n", 48);
		write(1, "Result expected : ", 18);
	/*	printf("%s\n", memchr(chr, av[2][0], atoi(av[3])));*/
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_memchr(chr2, av[2][0], atoi(av[3])));
	}
	/* ne marche pas
	if (ac == 5)
	{
		write(1, "### ft_memccpy ###\n", 19);
		write(1, "Test with the first, second, third and fourth argument.\n", 56);
		write(1, "Result expected : ", 18);
		printf("%s\n", memccpy(av[1], av[2], av[3][0], atoi(av[4])));
		write(1, "Your result : ", 14);
		printf("%s\n\n", ft_memccpy(av[1], av[2], av[3][0], atoi(av[4])));
	}*/
}
