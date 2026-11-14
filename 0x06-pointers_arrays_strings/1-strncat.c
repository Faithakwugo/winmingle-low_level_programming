#include "main.h"

char *_strncat(char *dest, char *src, int n){
	char *start = dest;
	int i = 0;

	while(*dest != '\0')
		dest++;

	while(i < n && *src != '\0'){
		*dest= *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return(start);
}

