#include "main.h"

void print_times_table(int n){
	int a;
	int b;
	int c;
	if( n < 0 || n > 15)
		return;
	for(a = 0; a <= n; a++){
		for(b = 0; b <= n; b++){
			c = a * b;
			if(c > 99){
				_putchar((c / 100) + '0');
				_putchar(((c % 100) / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if(c > 9){
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else{
				_putchar(c + '0');
			}
			if(b != n){
				_putchar(',');
				_putchar(' ');
			}
		
		}
	_putchar('\n');
	}

}
