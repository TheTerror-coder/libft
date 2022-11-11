#include<stdio.h>

int ft_isprint(int c);

int main(void)
{
    printf("'a'     sortie:    %d\n", ft_isprint('a'));
    printf("'z'     sortie:    %d\n", ft_isprint('z'));
    printf("'0'     sortie:    %d\n", ft_isprint('0'));
    printf("'9'     sortie:    %d\n", ft_isprint('9'));
    printf("'+'     sortie:    %d\n", ft_isprint('+'));
    printf("'&'     sortie:    %d\n", ft_isprint('&'));
    printf("']'     sortie:    %d\n", ft_isprint(']'));
    printf("'`'     sortie:    %d\n", ft_isprint('`'));
    printf("'A'     sortie:    %d\n", ft_isprint('A'));
    printf("'\n'     sortie:    %d\n", ft_isprint('\n'));
    printf("''     sortie:    %d\n", ft_isprint(0));
    printf("'128'     sortie:    %d\n", ft_isprint(128));
    printf("'.'     sortie:    %d\n", ft_isprint('.'));
    printf("'~'     sortie:    %d\n", ft_isprint('~'));
    printf("'Del'     sortie:    %d\n", ft_isprint(127));
    return (0);
}