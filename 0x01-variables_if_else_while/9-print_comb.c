#include <stdio.h>
/**
 * Author:Faithakwugo
 * program: Winmingle Communnity C Training
 * Description: prints single-digit numbers
 * of base 10 starting from 0
 **/

int main(void){
	int c;
	for(c = 0; c <= 9; c++){
		putchar(c + '0');

		if(c != 9)
			putchar(',');
			putchar(' ');

	}
	putchar('\n');
	return(0);
}
