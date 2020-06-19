#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char a);

void ft_ptnbr(int nb) {
	ft_putchar(nb);
}

void ft_putchar(char a) {
	write(1, &a, 1);
}

int main() {   
	int number;
	scanf("%d", &number);
	ft_ptnbr(number);
	return 0;
}


