#include <unistd.h>

void ft_putchar(char a){
	  write(1, &a, 1);
}

void ft_print_alphabet(void) {
	char letter = 'a';
	while (letter <= 'z') {
		ft_putchar(letter);
		letter++;
	}
}
