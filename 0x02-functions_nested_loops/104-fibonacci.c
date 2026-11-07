#include <stdio.h>

int main(void){
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long fibcount;
	int i;

	printf("%lu", fib1);
	printf(", ");
	printf("%lu", fib2);

	for(i = 1; i <= 98; i++)
	{
		fibcount = fib2 + fib1;
		fib1 = fib2;
		fib2 = fibcount;
		printf(", ");
		printf("%lu", fibcount);
	}
	printf("\n");
	return(0);
}
