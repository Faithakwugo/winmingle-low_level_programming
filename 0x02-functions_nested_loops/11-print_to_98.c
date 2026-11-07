#include "main.h"
/* print_to_98(int n) - prints all
 * natural numbers from from n to 98
 * return - void
 */

void print_to_98(int n){
	while(n > 98){
		if(n > 99){
			_putchar((n / 100) + '0');
			_putchar(((n % 100) / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if(n > 9){
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else{
			_putchar(n + '0');
		}
		n--;
		_putchar(',');
		_putchar(' ');
	}
	while(n < 98){
		int num;
		num = n;

		if(n < 0){
			_putchar('-');
			num = -n;
		}
		if(n > 99){
			_putchar((num / 100) + '0');
			_putchar(((num % 100) / 10) + '0');
			_putchar((num % 10) + '0');
		}
		else if(num > 9){
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		else{
			_putchar(num + '0');
		}
		n++;
		_putchar(',');
		_putchar(' ');
	}

	_putchar(9 + '0');
	_putchar(8 + '0');
	_putchar('\n');


}
