#include "main.h"
void print_num(int n){
	if(n / 10){
		print_num(n / 10);
	}
	_putchar(n % 10 + '0');
}

void print_diagsums(int *a, int size){
	int i, count = 0, sum = 0;
	for(i = 0; i < size; i++){
		count += a[i * size + i];
		sum += a[i * size + (size - 1 - i)];
	}
	print_num(count);
	_putchar(',');
	_putchar(' ');
	print_num(sum);
	_putchar('\n');
}

