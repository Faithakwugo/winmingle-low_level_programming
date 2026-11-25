#include "main.h"
#include <stddef.h>
char *_strstr(char *haystack, char *needle){
	int i, j;
	for(j = 0; haystack[j] != '\0'; j++){
		for(i = 0; needle[i] != '\0'; i++){
			if(haystack[j + i] != needle[i]){
				break;
			}
		}
		if(needle[i] == '\0'){
			return(&haystack[j]);
		}
	
	}
	return (NULL);
}

