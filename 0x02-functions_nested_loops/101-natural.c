#include "main.h"

int main(void){
	int sum = 0;
	int count = 0;
	int digits[10];
	int n;
	for(n = 0; n < 1024; n++){
		if(n % 3 == 0 || n % 5 == 0){
			sum += n;
		}
	}
	if(sum == 0)
		_putchar('0');
	while(sum > 0){
		digits[count] = sum % 10;
		sum /= 10;
		count++;
	}
	while(count > 0){
		count--;
		_putchar(digits[count] + '0');
	}

	_putchar('\n');
	return(0);
}
