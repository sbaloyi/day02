#include <unistd.h>

void ft_print_alphabet(void);
void ft_putchar(char a);

void ft_print_alphabet(void) {
	char letter = 'a';
	while (letter <= 'z') {
		ft_putchar(letter);
		letter++;
	}
}

void ft_putchar(char a){
	  write(1, &a, 1);
}

int main(void) {
	ft_print_alphabet();
        return 0;
}
