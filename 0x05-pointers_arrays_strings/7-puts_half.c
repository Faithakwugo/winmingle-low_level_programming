#include "main.h"

void puts_half(char *str){
	int len = 0;
	int i = 0;
	while(str[i] != '\0'){
		len++;
	}
	for(i = (len + 1) / 2; i < len; i++){
		_putchar(str[i]);
	}
	_putchar('\n');
}

