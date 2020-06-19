#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char a);

int main()
{
	ft_print_comb();
	return 0;
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
	return;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}
