#include "main.h"
void print_square(int size){
	int i;
	int n;
	if(size < 1)
		_putchar('\n');
	else
		for(i = 1; i <= size; i++){
			for(n = 1; n <= size; n++){
				_putchar('#');
			}
			_putchar('\n');
		}
}
