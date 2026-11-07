#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Faithakwugo
 * Program: WinMingle Community C Training
 * Description: Checks random to determine
 * whether it is Zero, negative, positive
 **/
void positive_or_negative(int n){
        if(n > 0)
                printf("%i is positive\n", n);
        else if (n == 0)
                printf("%i is zero\n", n);
        else
                printf("%i is negative\n", n);
}
