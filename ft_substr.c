#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *ptr;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }

    if(start >= i)
    {
        ptr = malloc(1);
        if (ptr == NULL)
		    return (NULL);
        ptr[0] = '\0';
        return (ptr);
    }
	if (len > i - start)
		len = i - start;
	ptr = malloc(len + 1);
    if (ptr == NULL)
		return (NULL);
	i = 0;
    while (s[start] != '\0' && i < len)
    {
        ptr[i] = s[start];
        i++;
        start++;
    }
    ptr[i] = '\0';
    return (ptr);

}

int main(void)
{
    const char *s1 = "Mohammad Hajeer";
    char *s3 = ft_substr(s1,2,8);
    printf("%s\n",s3);
    free(s3);
}