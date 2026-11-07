#include "main.h"
void times_table(void){
	int a;
	int b;
	int c;
	for(a = 0; a < 10; a++){
		for(b = 0; b < 10; b++){
			c = a * b;
			if(c > 9){
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else{
				_putchar(c + '0');
			}
			if(b != 9){
				_putchar(',');
				_putchar(' ');
			}
		
		}
		_putchar('\n');
	}

}
