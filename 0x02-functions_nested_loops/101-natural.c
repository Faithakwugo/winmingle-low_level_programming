#include <stdio.h>
int main(void){
	int i = 0;
	int n;
	for(n = 0; n < 1024; n++){
		if(n % 3 == 0 || n % 5 == 0){
			i += n;
		}
	}
	printf("%i",i);
	printf("\n");
	return(0);
}
