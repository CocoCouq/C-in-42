#include <stdlib.h>

unsigned int	count_words(char *str)
{
	unsigned int	i;
	unsigned int	words;

	i = 0;
	words = 0;
	if (str[0] != '\t' && str[0] != ' ' && str[0] != '\n')
	{
		words++;
	}
	while (str[i])
	{
		if ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') &&
				(str[i + 1] != '\t' && str[i + 1] != ' ' &&
				 str[i + 1] != '\n' && str[i + 1] != 0))
		{
			words++;
		}
		i++;
	}
	return (words);
}

char *copy_word(char *str)
{
	unsigned int	i;
	unsigned int	n;
	char			*dest;

	i = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != 0)
		i++;
	n = i;
	dest = (char*)malloc(sizeof(*dest) * (n + 1));
	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
	}
	return (dest);
}

unsigned int	word_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char *str)
{
	char			**result;
	unsigned int	i;
	unsigned int	word_index;
	unsigned int	words;

	words = count_words(str);
	result = (char**)malloc(sizeof(*result) * (words + 1));
	i = 0;
	word_index = 0;
	while (word_index < words)
	{
		if ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') &&
				(str[i + 1] != '\t' && str[i + 1] != ' ' &&
				 str[i + 1] != '\n' && str[i + 1] != 0))
		{
			result[word_index] = copy_word(&str[i]);
			word_index++;
		}
		i++;
	}
	result[word_index] = 0;
	return (result);
}
