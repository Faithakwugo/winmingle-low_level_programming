#include "main.h"
int _atioi(char *s){
	int sign = 1;
	int result = 0;

	while (*s){
		if(*s == '-')
			sign *= -1;

		if(*s >= '0' && *s <= '9')
			break;

		s++;
	}

	while(*s >= '0' && *s <= '9'){
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}

