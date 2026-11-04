#include <stdio.h>
/**
 * Author:Faithakwugo
 * program: Winmingle Communnity C Training
 * Description: prints all combination of two digits
 **/

int main(void){
	int c;
	int n;
	for(c = 0; c < 9; c++){
		for(n = c + 1; n < 10; n++){

			putchar(c + '0');
			putchar(n + '0');

			if(c != 8 || n != 9){
				putchar(',');
				putchar(' ');
			}
		}
	}
	
	putchar('\n');
	return(0);
}
