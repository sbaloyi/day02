#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
    char letter = 'z';
    while (letter >= 'a')
    {
        ft_putchar(letter);
        letter--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
