#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    if (s == NULL || f == NULL)
        return ;
    i = 0;
    while (s[i] != '\0')
    {
        f(i,&s[i]);
        i++;
    }
}
/*
void	ft_toupper_index(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	str[]= "hello world";
    ft_striteri(str, ft_toupper_index);
	printf("%s\n",str);
	return (0);
}*/