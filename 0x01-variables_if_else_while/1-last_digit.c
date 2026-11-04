#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Faithakwugo
 * Program: WinMingle Community C Training
 * Description: Checks random to determine
 * whether it is greter than 5 , equal to 
 * zero or less than 6
 **/
int main(void){
        int n;
        srand(time(0));
        n = rand();
	int c = n % 10;
        if(c > 5)
                printf("Last digit of %i is %i and is greater than 5\n", n, c);
        else if (c == 0)
                printf("Last digit of %i is %i and is 0\n", n, c);
               
        else
                printf("Last digit of %i is %i and is less than 6 and not 0\n", n, c);
                

        return(0);
}
