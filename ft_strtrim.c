#include "libft.h"

int	skip(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	c;

	j = 0;
	while (s1[j] != '\0')
	{
		i = 0;
		c = 0;
		while (set[i] != '\0')
		{
			if (s1[j] == set[i])
			{
				c = 1;
				break;
			}
			i++;
		}
		if (c == 0)
			break;
		j++;
	}
	return (j);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		c;
	char	*ptr;

	i = 0;
	j = skip(s1, set);
	c = 0;

	while (s1[i] != '\0')
		i++;
	i--;
	while (i >= j)
	{
		c = 0;
		while (set[c] != '\0')
		{
			if (s1[i] == set[c])
				break;
			c++;
		}
		if (set[c] == '\0')
			break;
		i--;
	}
	ptr = malloc(i - j + 2);
	if (ptr == NULL)
		return (NULL);
	c = 0;
	while (j <= i)
	{
		ptr[c] = s1[j];
		c++;
		j++;
	}
	ptr[c] = '\0';
	return (ptr);
}
int main(void)
{
    printf("%s\n",ft_strtrim("xxzxyzxzHelloxxx", "xyz"));
}