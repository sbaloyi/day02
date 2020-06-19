#include <unistd.h>

void ft_print_numbers (void);
void ft_putchar(char a);

void ft_print_numbers(void) {
	char number = '0';
	while(number <= '9'){
		ft_putchar(number);
		number++;
	}
}

void ft_putchar(char a) {
	  write(1, &a, 1);
}

int main()
{
	ft_print_numbers();
	return 0;
}
