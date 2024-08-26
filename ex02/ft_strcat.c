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

char *ft_strcat(char *dest, char *src)
{
    int i;
    i = 0;
    int len = ft_strlen(dest); 
    while(src[i])
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
    printf("%s\n", ft_strcat(dest, src));
    return(0);
}*/