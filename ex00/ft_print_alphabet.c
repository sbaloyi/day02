void ft_print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}
