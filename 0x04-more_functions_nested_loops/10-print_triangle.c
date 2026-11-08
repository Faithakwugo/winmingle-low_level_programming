#include "main.h"

void print_triangle(int size){
	int row;
	int space;
	int decre = size - 1;
	int incre = 1;
	int hash;
	if(size < 1)
		_putchar('\n');
	else
		for(row = 1; row <= size; row++){
			for(space = 1; space <= decre; space++){
				if(space > 0){
					_putchar(' ');
				}
			}
			for(hash = 1; hash <= incre; hash++){
				if(hash > 0){
					_putchar('#');
				}
			}
			incre++;
			decre--;
			_putchar('\n');
		}

}
