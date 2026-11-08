#include "main.h"

int main(void){
	int i;
	for(i = 1; i <= 100; i++){
		if(i % 15 == 0){
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if(i % 3 == 0){
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if(i % 5 == 0){
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else{
			if(i > 99){
				_putchar((i / 100) + '0');
				_putchar(((i % 100) / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if(i > 9){
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else{
			_putchar(i + '0');
			}
			_putchar(' ');
		}
	}
	_putchar('\n');
	return(0);
}
