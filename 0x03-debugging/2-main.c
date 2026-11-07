#include <stdio.h>
#include "main.h"

/**
* main - executes the code
Return: 0
*/
int main(void){
int a = 32;
int b = 972;
int c = 600;
int r;
r = largest_number(a, b, c);

printf("%i is the largest number", r);
printf("\n");
return(0);
}
