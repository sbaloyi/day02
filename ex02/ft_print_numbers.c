#include <unistd.h>

void ft_putchar(char a);

void ft_print_numbers(void) {
	char num ='0';
	while(num<='9'){
	ft_putchar(num);
	num++;
	}
}

void ft_putchar(char a){
  write(1, &a, 1);
}

int main()
{
  ft_print_numbers();
  return 0;
}
