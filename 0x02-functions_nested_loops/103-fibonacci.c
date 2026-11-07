#include <stdio.h>

int main(void){
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long fibcount;
	int i;
	unsigned long sum = fib2;


	for(i = 1; i <= 50; i++)
	{
		fibcount = fib2 + fib1;
		fib1 = fib2;
		fib2 = fibcount;

		if(fibcount <= 4000000){
			if(fibcount % 2 == 0){
				sum += fibcount;
			}
		}
	}
	printf("%lu", sum);
	

	printf("\n");
	return(0);
}
