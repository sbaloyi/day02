#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_comb()
{
	char a;
	char b;
	char c;
	a = '0' - 1;
	while(++a <= '9'){
		b = a;
		while(++b <= '9'){
			c = b;
			while(++c <= '9') {
				if(!(a=='0' && b=='1' && c=='2')){
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
			}
		}
	}
}
