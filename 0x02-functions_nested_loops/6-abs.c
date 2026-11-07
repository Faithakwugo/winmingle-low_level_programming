#include "main.h"
/* _abs(int) - computes the value of an integer
 * return - 0
 */

int _abs(int c){
	if(c < 0){
		c = -c;
		return(c);
	}
	return(c);
}
