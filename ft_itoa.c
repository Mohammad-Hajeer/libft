
#include "libft.h"

static int	countnum(int n)
{
	int			i;
	long long	num;

	i = 0;
	num = n;
	if (num <= 0)
	{
		i++;
		num = -num;
	}
	while (num > 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long long	num;
	int			i;

	num = n;
	i = countnum(n);
	ptr = malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	if (num < 0)
		num = -num;
	while (i > 0)
	{
		i--;
		ptr[i] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
/*
int main(void)
{
    printf("%s\n",ft_itoa(-2147483648));
}*/