#include "main.h"

int main(void){

	int i;
	char *arr = "_putchar";
	for(i = 0; arr[i] != '\0'; i++){
		_putchar(arr[i]);
	}
	_putchar('\n');
	return(0);
}

