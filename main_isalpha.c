#include<stdio.h>

int ft_isalpha(int c);

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        printf("sortie: %d\n", ft_isalpha(*argv[1]));
    }
    return (0);
}