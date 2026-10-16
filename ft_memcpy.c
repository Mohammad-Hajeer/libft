#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t c;
    char unsigned *destt = (unsigned char *)dest;
    const unsigned char *srcc = (const unsigned char *)src;

	c = 0;

	if (n == 0)
		return (destt);
	while (n--)
	{
		destt[c] = srcc[c];
		c++;
	}
	return (destt);
}
/*
int main (void)
{
	char st[]={"mohammd hajeer"};
	char *des;
	//printf("%d\n",ft_strlcpy(des,st,11));
	//printf("%s\n",memcpy(des,st,10));
	printf("%s\n",ft_memcpy(des,st,1)); //to test what stored in dest
}
*/