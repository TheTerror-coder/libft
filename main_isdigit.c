#include<stdio.h>

int ft_isdigit(int c);

/*int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}*/

int main(void)
{
    printf("'a'     sortie:    %d\n", ft_isdigit('a'));
    printf("'z'     sortie:    %d\n", ft_isdigit('z'));
    printf("'0'     sortie:    %d\n", ft_isdigit('0'));
    return (0);
}