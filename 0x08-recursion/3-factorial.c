#include "main.h"


/**
 *factorial- factorail 
 *@n: is an integer
 *Return an int
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if(n == 0)
		return 1;
	return(n * factorial(n - 1));
}
