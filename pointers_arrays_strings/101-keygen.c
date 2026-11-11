#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int i;
	char password[13];
	char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789";

	srand(time(NULL));
	for(i = 0; i < 12; i++){
		password[i] = characters[rand() % 62];
	}
	password[12] = '\0';
	printf("%s\n", password);
	return(0);
}
