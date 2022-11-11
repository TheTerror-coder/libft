
#include<stdio.h>

void *ft_memset(void *s, int c, unsigned int n);

int main(void)
{
    int     i;
    char    ch[10];
    ft_memset(ch, 'i', 5);
    ft_memset(ch + 5, 'a', 5);

    for(i = 0; i < 10; i++)
    {
        printf("%c", ch[i]);
    }
    return (0);
}