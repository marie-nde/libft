#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		char a = av[1][0];
		char b = av[1][0];
		char c = av[1][0];
		char d = av[1][0];
		char *clr = ft_strdup(av[1]);
		char *new;

		ft_putstr("### ft_putchar ###\n");
		ft_putstr("Display the first character of the first argument.\n");
		ft_putstr("Your result : ");
		ft_putchar(av[1][0]);
		ft_putstr("\n\n");

		ft_putstr("### ft_putstr ###\n");
		ft_putstr("Display the first argument.\n");
		ft_putstr("Your result : ");
		ft_putstr(av[1]);
		ft_putstr("\n\n");

		ft_putstr("### ft_putendl ###\n");
		ft_putstr("Display the first argument followed by a newline.\n");
		ft_putstr("Your result : ");
		ft_putendl(av[1]);
		ft_putstr("\n\n");

		ft_putstr("### ft_putnbr ###\n");
		ft_putstr("Display an int.\n");
		ft_putstr("Your result : ");
		ft_putnbr(atoi(av[1]));
		ft_putstr("\n\n");

		ft_putstr("### ft_strclr ###\n");
		ft_putstr("Takes the first argument and returns a string full of backslash 0.\n");
		ft_putstr("Your result : \"");
		ft_strclr(clr);
		write(1, clr, ft_strlen(av[1]));
		ft_putstr("\"\n\n");

		ft_putstr("### ft_strtrim ###\n");
		ft_putstr("Returns a copy of the first argument without spaces at the beginning and the end of the string if possible.\n");
		ft_putstr("Your result : \"");
		ft_putstr(ft_strtrim(av[1]));
		ft_putstr("\"\n\n");

		if (ft_atoi(av[1]) < 100)
		{
			ft_putstr("### ft_strnew ###\n");
			ft_putstr("Returns a new string of size n, full of backlash 0.\n");
			ft_putstr("Your result : \"");
			new = ft_strnew(ft_atoi(av[1]));
			write(1, new, ft_atoi(av[1]));
			ft_putstr("\"\n\n");
		}

/*		ft_putstr("### ft_itoa ###\n");
		ft_putstr("Converts an int into a string.\n");
		ft_putstr("Your result : ");
		ft_putstr(ft_itoa(ft_atoi(av[1])));
		ft_putstr("\n\n");*/

		ft_putstr("### ft_memalloc ###\n");
		ft_putstr("Returns a clean string initialized at 0 of size n.\n");
		ft_putstr("Your result : \"");
		write(1, ft_memalloc(ft_atoi(av[1])), ft_atoi(av[1]));
		ft_putstr("\"\n\n");

		ft_putstr("### ft_memdel ###\n");
		ft_putstr("Clears the pointer sent and puts it to NULL.\n");
		ft_putstr("ft_memdel can't be tested.\n\n");

		ft_putstr("### ft_strdel ###\n");
		ft_putstr("Clears the string sent and puts it to NULL.\n");
		ft_putstr("ft_strdel can't be tested.\n\n");

		write(1, "### ft_strlen ###\n", 18);
		ft_putstr("Display the size of the first argument.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(strlen(av[1]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_strlen(av[1]));
		ft_putstr("\n\n");

		write(1, "### ft_strdup ###\n", 18);
		ft_putstr("Duplicates the first argument into a new string.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strdup(av[1]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strdup(av[1]));
		ft_putstr("\n\n");

		write(1, "### ft_atoi ###\n", 16);
		ft_putstr("Transforms a string into an int.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(atoi(av[1]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_atoi(av[1]));
		ft_putstr("\n\n");

		write(1, "### ft_isalpha ###\n", 19);
		ft_putstr("Returns an int > 0 if the first character of the first argument is alphabetic.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(isalpha(av[1][0]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_isalpha(av[1][0]));
		ft_putstr("\n\n");

		write(1, "### ft_isdigit ###\n", 19);
		ft_putstr("Returns an int > 0 if the first character of the first argument is a number.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(isdigit(av[1][0]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_isdigit(av[1][0]));
		ft_putstr("\n\n");

		write(1, "### ft_isalnum ###\n", 19);
		ft_putstr("Returns an int > 0 if the first character of the first argument is alphanumeric.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(isalnum(av[1][0]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_isalnum(av[1][0]));
		ft_putstr("\n\n");

		write(1, "### ft_isascii ###\n", 19);
		ft_putstr("Returns an int > 0 if the first character of the first argument is an ascii character.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(isascii(av[1][0]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_isascii(av[1][0]));
		ft_putstr("\n\n");

		write(1, "### ft_isprint ###\n", 19);
		ft_putstr("Returns an int > 0 if the first character of the first argument is printable.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(isprint(av[1][0]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_isprint(av[1][0]));
		ft_putstr("\n\n");

		write(1, "### ft_toupper ###\n", 19);
		ft_putstr("If the first character of the first argument is a lowercase letter, puts it in uppercase.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(toupper(a));
		ft_putstr(" = ");
		ft_putchar(toupper(b));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_toupper(b));
		ft_putstr(" = ");
		ft_putchar(ft_toupper(b));
		ft_putstr("\n\n");

		write(1, "### ft_tolower ###\n", 19);
		ft_putstr("If the first character of the first argument is an uppercase letter, puts it in lowercase.\n");
		write(1, "Result expected : ", 18);
		ft_putnbr(tolower(c));
		ft_putstr(" = ");
		ft_putchar(tolower(c));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putnbr(ft_tolower(d));
		ft_putstr(" = ");
		ft_putchar(ft_tolower(d));
		ft_putstr("\n\n");
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
		char *zero = ft_strdup(av[1]);
		char *zero2 = ft_strdup(av[1]);
		char **tab;
		int i = 0;

		ft_putstr("### ft_strequ ###\n");
		ft_putstr("Compares the first and second argument and returns 1 if they are equal.\n");
		ft_putstr("Your result : ");
		ft_putnbr(ft_strequ(av[1], av[2]));
		ft_putstr("\n\n");

		ft_putstr("### ft_strjoin ###\n");
		ft_putstr("Concatenates the first and second argument and returns this new string.\n");
		ft_putstr("Your result : ");
		ft_putstr(ft_strjoin(av[1], av[2]));
		ft_putstr("\n\n");

		ft_putstr("### ft_strsplit ###\n");
		ft_putstr("Returns a table of the first string separated by the first character of the second argument.\n");
		ft_putstr("Your result : ");
		tab = ft_strsplit(av[1], av[2][0]);
		while (tab[i] != NULL)
		{
			ft_putstr("\"");
			ft_putstr(tab[i++]);
			ft_putstr("\", ");
		}
		if (tab[i] == NULL)
			ft_putstr("(null)");
		ft_putstr("\n\n");

		ft_putstr("### ft_putchar_fd ###\n");
		ft_putstr("Display a char c on the file descriptor fd.\n");
		ft_putstr("Your result : ");
		ft_putchar_fd(av[1][0], ft_atoi(av[2]));
		ft_putstr("\n\n");

		ft_putstr("### ft_putstr_fd ###\n");
		ft_putstr("Display a string on the file descriptor fd.\n");
		ft_putstr("Your result : ");
		ft_putstr_fd(av[1], ft_atoi(av[2]));
		ft_putstr("\n\n");

		ft_putstr("### ft_putendl_fd ###\n");
		ft_putstr("Display a string followed by a newline on the file descriptor fd.\n");
		ft_putstr("Your result : ");
		ft_putendl_fd(av[1], ft_atoi(av[2]));
		ft_putstr("\n\n");

		ft_putstr("### ft_putnbr_fd ###\n");
		ft_putstr("Display an int on the file descriptor fd.\n");
		ft_putstr("Your result : ");
		ft_putnbr_fd(ft_atoi(av[1]), ft_atoi(av[2]));
		ft_putstr("\n\n");

		write(1, "### ft_strcmp ###\n", 18);
		ft_putstr("Compares the first and second argument.\n");
		write(1, "Result expected : ", 18);
		printf("%d\n", strcmp(av[1], av[2]));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_strcmp(av[1], av[2]));

		write(1, "### ft_strcpy ###\n", 18);
		ft_putstr("Copies the second string in the first string sent.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strcpy(cpy3, cpy4));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strcpy(cpy, cpy2));
		ft_putstr("\n\n");

		write(1, "### ft_strcat ###\n", 18);
		ft_putstr("Copies the second string at the end of the first string.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strcat(cat, cat2));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strcat(cat3, cat4));
		ft_putstr("\n\n");

		write(1, "### ft_strstr ###\n", 18);
		ft_putstr("Finds, if possible, the second string in the first one and returns it from the beginning of the second string.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strstr(av[1], av[2]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strstr(av[1], av[2]));
		ft_putstr("\n\n");

		write(1, "### ft_bzero ###\n", 17);
		ft_putstr("Fills n bytes with backslash 0.\n");
		ft_putstr("Result expected : Before : ");
		ft_putstr(zero);
		ft_putstr(", ");
		ft_putnbr(ft_atoi(av[2]));
		ft_putstr("\nAfter : \"");
		bzero(zero, atoi(av[2]));
		write(1, zero, ft_strlen(av[1]));
		ft_putstr("\"\n");
		ft_putstr("Your result : Before : ");
		ft_putstr(zero2);
		ft_putstr(", ");
		ft_putnbr(ft_atoi(av[2]));
		ft_putstr("\nAfter : \"");
		ft_bzero(zero2, atoi(av[2]));
		write(1, zero2, ft_strlen(av[1]));
		ft_putstr("\"\n\n");

		write(1, "### ft_strchr ###\n", 18);
		ft_putstr("Search the first character of the second argument in the first string.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strchr(av[1], av[2][0]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strchr(av[1], av[2][0]));
		ft_putstr("\n\n");

		write(1, "### ft_strrchr ###\n", 19);
		ft_putstr("Search the last character of the second character in the first string.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strrchr(av[1], av[2][0]));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strrchr(av[1], av[2][0]));
		ft_putstr("\n\n");
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
/*		char *chr = ft_strdup(av[1]);*/
		char *chr2 = ft_strdup(av[1]);
		char *s1 = ft_strdup(av[1]);
		char *s2 = ft_strdup(av[2]);
		char *ncat = ft_strdup(av[1]);
		char *ncat2 = ft_strdup(av[2]);
		char *ncat3 = ft_strdup(av[1]);
		char *ncat4 = ft_strdup(av[2]);

		ft_putstr("### ft_strnequ ###\n");
		ft_putstr("Compares the first and second argument for n bytes and returns 1 if they are equal.\n");
		ft_putstr("Your result : ");
		ft_putnbr(ft_strnequ(av[1], av[2], ft_atoi(av[3])));
		ft_putstr("\n\n");

		ft_putstr("### ft_strsub ###\n");
		ft_putstr("Copies the first string from an index (2nd arg) for n bytes (3rd arg) and returns the new string.\n");
		ft_putstr("Your result : \"");
		ft_putstr(ft_strsub(av[1], ft_atoi(av[2]), ft_atoi(av[3])));
		ft_putstr("\"\n\n");

		write(1, "### ft_strncmp ###\n", 19);
		ft_putstr("Compares the first, second and third argument.\n");
		write(1, "Result expected : ", 18);
		printf("%d\n", strncmp(av[1], av[2], atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_strncmp(av[1], av[2], atoi(av[3])));

		write(1, "### ft_strncpy ###\n", 19);
		ft_putstr("Copies n bytes from the second string in the first one.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strncpy(ncpy, ncpy2, atoi(av[3])));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strncpy(ncpy3, ncpy4, atoi(av[3])));
		ft_putstr("\n\n");

		write(1, "### ft_strncat ###\n", 19);
		ft_putstr("Copies n bytes from the second string at the end of the first string.\n");
		write(1, "Result expected : ", 18);
		ft_putstr(strncat(ncat, ncat2, atoi(av[3])));
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strncat(ncat3, ncat4, atoi(av[3])));
		ft_putstr("\n\n");

		write(1, "### ft_strnstr ###\n", 19);
		ft_putstr("Finds, if possible, the second string in the n first bytes of the first string.\n");
		write(1, "Result expected : ", 18);
	/*	printf("%s\n", strnstr(av[1], av[2], atoi(av[3])));*/
		ft_putstr("\n");
		write(1, "Your result : ", 14);
		ft_putstr(ft_strnstr(av[1], av[2], atoi(av[3])));
		ft_putstr("\n\n");

		write(1, "### ft_memset ###\n", 18);
		ft_putstr("Fills the n first bytes of the first argument with the first character of the second argument.\n");
		write(1, "Result expected : ", 18);
		printf("%p\n", memset(set, av[2][0], atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%p\n\n", ft_memset(set2, av[2][0], atoi(av[3])));

		write(1, "### ft_memcpy ###\n", 18);
		ft_putstr("Copies n bytes from the second string to the first one.\n");
		write(1, "Result expected : ", 18);
		printf("%p\n", memcpy(memcpy1, memcpy2, atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%p\n\n", ft_memcpy(memcpy1, memcpy2, atoi(av[3])));

		write(1, "### ft_memmove ###\n", 19);
		ft_putstr("Same as memcpy but the copy is made with a temporary zone.\n");
		write(1, "Result expected : ", 18);
		printf("%p\n", memmove(move, move2, atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%p\n\n", ft_memmove(move3, move4, atoi(av[3])));

		write(1, "### ft_memchr ###\n", 18);
		ft_putstr("Finds, if possible, in the n first bytes of the first argument, the first character of the second argument.\n");
		write(1, "Result expected : ", 18);
	/*	printf("%s\n", memchr(chr, av[2][0], atoi(av[3])));*/
		write(1, "Your result : ", 14);
		printf("%p\n\n", ft_memchr(chr2, av[2][0], atoi(av[3])));

		write(1, "### ft_memcmp ###\n", 18);
		ft_putstr("Compares the n first bytes of the first and second argument.\n");
		write(1, "Result expected : ", 18);
		printf("%d\n", memcmp(s1, s2, atoi(av[3])));
		write(1, "Your result : ", 14);
		printf("%d\n\n", ft_memcmp(s1, s2, atoi(av[3])));
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
