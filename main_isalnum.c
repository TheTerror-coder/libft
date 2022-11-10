#include<stdio.h>

int ft_isalnum(int c);

int main(void)
{
    printf("'a'     sortie:    %d\n", ft_isalnum('a'));
    printf("'z'     sortie:    %d\n", ft_isalnum('z'));
    printf("'0'     sortie:    %d\n", ft_isalnum('0'));
    printf("'9'     sortie:    %d\n", ft_isalnum('9'));
    printf("'+'     sortie:    %d\n", ft_isalnum('+'));
    printf("'&'     sortie:    %d\n", ft_isalnum('&'));
    printf("']'     sortie:    %d\n", ft_isalnum(']'));
    printf("'`'     sortie:    %d\n", ft_isalnum('`'));
    printf("'A'     sortie:    %d\n", ft_isalnum('A'));
    printf("'\n'     sortie:    %d\n", ft_isalnum('\n'));
    printf("''     sortie:    %d\n", ft_isalnum(0));
    printf("'*'     sortie:    %d\n", ft_isalnum('*'));
    printf("'.'     sortie:    %d\n", ft_isalnum('.'));
    printf("'~'     sortie:    %d\n", ft_isalnum('~'));
    printf("'F'     sortie:    %d\n", ft_isalnum('F'));
    return (0);
}