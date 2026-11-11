#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

int main(void){
	int i;
	char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789";

	srand(time(NULL));
	for(i = 0; i < 12; i++){
		_putchar(characters[rand() % 62]);
	}
	_putchar('\n');
	return(0);
}
