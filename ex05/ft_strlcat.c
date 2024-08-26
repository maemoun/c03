#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return(i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    i = 0;
    int len = ft_strlen(dest);
    while (src[i] && i < size)
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return(ft_strlen(dest));
}
int main()
{
    char dest[] = "abcde";
    char src[] = "12345";
    unsigned int size = 3;
    printf("%d\n", ft_strlcat(dest, src, size));
    return(0);
}