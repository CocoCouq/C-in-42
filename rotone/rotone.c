#include <unistd.h>

char	next_letter(char character)
{
	char c;

	c = character;
	if ('a' <= c && c <= 'z')
	{
		c = (c - 'a' + 1) % 26 + 'a';
	}
	else if ('A' <= c && c <= 'Z')
	{
		c = (c - 'A' + 1) % 26 + 'A';
	}
	return (c);
}

int		main(int argc, char **argv)
{
	int i;
	char character;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			character = next_letter(argv[1][i]);
			write(1, &character, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
