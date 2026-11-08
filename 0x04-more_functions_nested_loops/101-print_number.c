#include "main.h"
void print_largest_number(int n){
	if(n / 10)
		print_largest_number(n / 10);
	_putchar(( n % 10) + '0');
}
void print_number(int n){
	if( n < 0){
		int num = -n;
		_putchar('-');
		if(num > 9)
			print_largest_number(num);
		else
			_putchar(num + '0');
	}
	else if(n == 0){
		_putchar(n + '0');
	}
	else{
		if(n > 9)
			print_largest_number(n);
		else
			_putchar(n + '0');
	}

}
