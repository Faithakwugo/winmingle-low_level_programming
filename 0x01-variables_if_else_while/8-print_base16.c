#include <stdio.h>
/**
 * Author:Faithakwugo
 * program: Winmingle Communnity C Training
 * Description: prints single-digit numbers
 * of base 16 in lower case
 **/

int main(void){
	int c;
	for(c = 0; c <= 9; c++)
		putchar('0' + c);
	
	char n;
	for(n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return(0);
}
