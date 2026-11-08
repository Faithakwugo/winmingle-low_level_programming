#include "main.h"

void print_diagonal(int n){
	int row;
	int space;
	int incre = 1;
	if(n < 1)
		_putchar('\n');
	else
		for(row = 1; row <= n; row++){
			for(space = 1; space <= incre; space++){
				if(space > 1){
					_putchar(' ');
				}
			}
			incre++;
			_putchar('\\');
			_putchar('\n');
		}

}
