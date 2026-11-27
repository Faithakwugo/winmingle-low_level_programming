#include "main.h"
int find_root(int n, int i){
	if(i * i > n)
		return -1;
	if(i * i == n)
		return i;
	return (find_root(n, i + 1));
}

int _sqrt_recursion(int n){
	if(n < 0)
		return -1;
	return (find_root(n, 0));

}
