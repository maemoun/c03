#include <unistd.h>
//#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return(i);
}

char    *ft_strncat(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;
    int len = ft_strlen(dest);
    while(src[i] && i < n)
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = 0;
    return(dest);
}

/*int main()
{
    char dest[] = "abcd";
    char src[] = "1234";
    unsigned int n = 3;
    printf("%s", ft_strncat(dest, src, n));
    return(0);
}*/