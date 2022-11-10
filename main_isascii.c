#include<stdio.h>

int ft_isascii(int c);

int main(void)
{
    printf("'a'     sortie:    %d\n", ft_isascii('a'));
    printf("'z'     sortie:    %d\n", ft_isascii('z'));
    printf("'0'     sortie:    %d\n", ft_isascii('0'));
    printf("'9'     sortie:    %d\n", ft_isascii('9'));
    printf("'+'     sortie:    %d\n", ft_isascii('+'));
    printf("'&'     sortie:    %d\n", ft_isascii('&'));
    printf("']'     sortie:    %d\n", ft_isascii(']'));
    printf("'`'     sortie:    %d\n", ft_isascii('`'));
    printf("'A'     sortie:    %d\n", ft_isascii('A'));
    printf("'\n'     sortie:    %d\n", ft_isascii('\n'));
    printf("''     sortie:    %d\n", ft_isascii(0));
    printf("'128'     sortie:    %d\n", ft_isascii(128));
    printf("'.'     sortie:    %d\n", ft_isascii('.'));
    printf("'~'     sortie:    %d\n", ft_isascii('~'));
    printf("'F'     sortie:    %d\n", ft_isascii('F'));
    return (0);
}