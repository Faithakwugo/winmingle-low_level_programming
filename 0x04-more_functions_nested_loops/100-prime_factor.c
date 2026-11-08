#include "main.h"

void print_largest_number(long n){
	if(n / 10)
		print_largest_number(n / 10);
	_putchar((n % 10) + '0');
}
int main(void){
	long num = 612852475143;
	long i;
	long largest;
	for(i =  2; i < num; i++){
		while(num % i == 0){
			largest = i;
			num /= i;
		}
	}
	if(num > 1)
		largest = num;
	print_largest_number(largest);
	_putchar('\n');
	return(0);
}
