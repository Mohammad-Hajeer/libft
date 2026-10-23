#include "libft.h"

static size_t count_words(char const *s, char c)
{
    size_t i;
    size_t count;
    size_t flag;

    i = 0;
    count = 0;
    flag = 0;
    while (s[i])
    {
        if (s[i] != c)
            count++;//6 0
        else if (count > 0)
        {
            flag++;//4
            count = 0;//1
        }
        i++;
    }
    if (count > 0)
        flag++;
    return (flag); 
}

static char	**free_split(char **split, size_t j)
{
	while (j > 0)
		free(split[--j]);
	free(split);
	return (NULL);
}

static char	**fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])// "hello  world 42 Amman"
	{
		while (s[i] && s[i] == c)
			i++;
		start = i; //7
		while (s[i] && s[i] != c)
			i++;//12
		if (i > start)
		{
			split[j] = ft_substr(s, start, i - start);
			if (!split[j])
				return (free_split(split, j));
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	return (fill_split(split, s, c));
}
/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world 42 Amman", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/