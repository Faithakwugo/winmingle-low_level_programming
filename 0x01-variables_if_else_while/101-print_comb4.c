#include <stdio.h>
/**
 * Author:Faithakwugo
 * program: Winmingle Communnity C Training
 * Description: prints all combination of two digits
 **/

int main(void){
	int c, n, i;
	for(c = 0; c < 8; c++){
		for(n = c + 1; n < 9; n++){
			for(i = n + 1; i < 10; i++){

				putchar(c + '0');
				putchar(n + '0');
				putchar(i + '0');

				if(c != 7 || n != 8 || i != 9){
					putchar(',');
					putchar(' ');
			
				}
			}
		}
	}
	
	putchar('\n');
	return(0);
}
