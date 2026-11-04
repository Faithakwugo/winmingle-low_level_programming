#include <stdio.h>
/**
 * Author: Faithakwugo
 * Program: WinMingle Community C Training
 * Description: Prints alphabets in lowercase followed by newline
 **/
int main(void){
	char c;
	for(c = 'z'; c >= 'a'; c--){
		putchar(c);
	}
	putchar('\n');
	return(0);
}
