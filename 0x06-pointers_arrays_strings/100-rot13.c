#include "main.h"

char *rot13(char *str){
	int i = 0;
	char base;

	for(i = 0; str[i]; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			base = 'a';
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			base = 'A';
		}
		else
			continue;
		str[i] = (str[i] - base + 13) % 26 + base;
	}
		
	return(str);
}
