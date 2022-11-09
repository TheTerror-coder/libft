#include<stdio.h>

int ft_isalpha(int c);

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        printf("%d", ft_isalpha(10));
    }
    return (0);
}