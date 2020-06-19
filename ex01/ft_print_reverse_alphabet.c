#include <unistd.h>

void ft_print_reverse_alphabet(void);
void ft_putchar(char a);

void ft_print_reverse_alphabet(void)
{
	char letter = 'z';
	while (letter >= 'a') {
		ft_putchar(letter);
		letter--;
	}
}

void ft_putchar(char a) {
	  write(1, &a, 1);
}

int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
