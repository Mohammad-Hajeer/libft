#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t          	c;
	unsigned char  		*destt;
	const unsigned char *srcc;

	destt = (unsigned char *)dest;
	srcc = (const unsigned char *)src;
	c = 0;

	if (n == 0)
		return (dest);
	while (n--)
	{
		destt[c] = srcc[c];
		c++;
	}
	return (dest);
}
/*
int main(void)
{
	char	st[] = "mohammd hajeer";
	char	des[20];

	ft_memcpy(des, st, 1);
	des[1] = '\0';
	printf("%s\n", des);
	return (0);
}*/