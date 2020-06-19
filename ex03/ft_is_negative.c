#include <stdio.h>
void ft_is_negative(int);
void ft_putchar(char n);

void ft_is_negative(int n) { 
	if (n >= 0) {
		ft_putchar('P');
	} else if (n < 0) {
		ft_putchar('N');
	 }    
}

void ft_putchar(char a) {
	  write(1, &a, 1);
}

int main()
{
	int number;
	scanf("%d", &number);
	ft_is_negative(number);
	return 0;
}
