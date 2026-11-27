#include "main.h"
int _strlen_recursion(char *s){
	if(*s == '\0')
		return 0;
	return (1 + _strlen_recursion(s + 1));
}
/***
 * Normal palindrome
 *
int is_palindrome(char *s){
	int len = _strlen_recursion(s);
	int start = 0;
	int end = len - 1;
	while(start < end){
		if(s[start] != s[end])
			return 0;
		start++;
		end--;
	}
	return 1;
}
***/
/*Recursive Palindreome*/
int checks(char *s, int start, int end){
	if(start >= end)
		return 1;
	if(s[start] != s[end])
		return 0;
	return (checks(s, start + 1, end - 1));
}
int is_palindrome(char *s){
	int len = _strlen_recursion(s);
	return (checks(s, 0, len - 1));
}



