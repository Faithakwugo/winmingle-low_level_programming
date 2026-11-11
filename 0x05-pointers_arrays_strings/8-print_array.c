#include "main.h"
static void print_unit(unsigned int num){
	if(num / 10)
		print_unit(num / 10);
	_putchar((num % 10 ) + '0');
}

void print_array(int *a, int n){
	unsigned int num;
	int i;

	for(i = 0; i < n; i++){
		if(a[i] < 0){
			_putchar('-');
			num = -(unsigned int)a[i];
		}
		else
			num = a[i];
		print_unit(num);

		if(i != n - 1){
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

