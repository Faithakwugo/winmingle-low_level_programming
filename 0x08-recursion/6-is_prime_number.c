#include "main.h"
int help_func(int n, int i){
	if(i * i > n)
		return 1;
	if(n % i == 0)
		return 0;
	return help_func(n, i + 1);
}

int is_prime_number(int n){
	if(n < 2)
		return 0;
	return help_func(n, 2);
}

