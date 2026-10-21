#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t              c;
    unsigned char       *destt;
    const unsigned char *srcc;

    destt = (unsigned char *)dest;
    srcc = (const unsigned char *)src;

    if (n == 0)
        return (dest);

    if (destt < srcc)
    {
        c = 0;
        while (c < n)
        {
            destt[c] = srcc[c];
            c++;
        }
    }
    else
    {
        c = n;
        while (c > 0)
        {
            c--;
            destt[c] = srcc[c];
        }
    }
    return (dest);
}
/*
int main (void)
{
	char st[]={"mohammd hajeer"};
	char *des;
	//printf("%d\n",ft_strlcpy(des,st,11));
	//printf("%s\n",memcpy(des,st,10));
	printf("%s\n",ft_memmove(des,st,5)); //to test what stored in dest
}
*/