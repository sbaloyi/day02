#include <unistd.h>

void ft_putchar(char a) {
	  write(1, &a, 1);
}

void ft_print_numbers(void) {
	char number = '0';
	while(number <= '9'){
		ft_putchar(number);
		number++;
	}
}
