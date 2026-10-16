#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    char *ptr;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
	ptr = malloc(++i);
    if (ptr == NULL)
		return (NULL);
	i = 0;
    while (s[i] !='\0')
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
/*
int main(void)
{
    const char *s1 = "String";
    char *s2 = strdup(s1);
    char *s3 = ft_strdup(s1);
    printf("%s\n",s2);
    printf("%s\n",s3);
    free(s2);
    free(s3);
}*/