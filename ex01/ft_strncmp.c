#include <unistd.h>
//#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;
    i = 0;
    while((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i])
            return(s1[i] - s2[i]);
        i++;
    }
    return(s1[i - 1] - s2[i - 1]);
}

/*int main()
{
    char s1[] = "a";
    char s2[] = "ab";
    unsigned int n = 2;
    printf("%d", ft_strncmp(s1, s2, n));
    return(0);
}*/