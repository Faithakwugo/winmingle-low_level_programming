#include <stdio.h>
/**
 * Author:Faithakwugo
 * program: Winmingle Communnity C Training
 * Description: prints all combination of two two digits
 **/

int main(void){
	int c;
	int n;

	for(c = 0; c < 99; c++){
		for(n = 0; n < 100; n++){

			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
		
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			
			if(c != 98 || n != 99){
				putchar(',');
				putchar(' ');
			}
			
		}
	}
	
	putchar('\n');
	return(0);
}
