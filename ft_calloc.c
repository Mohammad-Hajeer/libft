#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)

{
	void	*ptr;
	size_t	i;
	char	*byte;

	i = 0;
	if (nmemb != 0 && size > ((size_t) -1) / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	byte = (char *)ptr;
	while (i < (nmemb * size))
	{
		byte[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main()
{
    int *pt = ft_calloc(5,4);
    printf("%d\n%d\n",pt[0],pt[21]);
}*/
