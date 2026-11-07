#include "main.h"
#include <stdio.h>

int main(void){
	int i;
	char c;
	char arr[] = "_putchar";
	for(i = 0; i <= 8; i++){
		c = arr[i];
		_putchar(c);
	}
	_putchar('\n');
	return(0);
}
