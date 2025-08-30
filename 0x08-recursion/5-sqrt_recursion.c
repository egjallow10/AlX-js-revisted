#include "main.h"

int _sqrt_helper(int n, int a)
{
	if ( a * a == n)
		return a;

	if ( n < a * a)
		return -1;

	if (n > a * a)
		return _sqrt_helper(n, a + 1);
	return 0;
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	
	if(n == 0)
		return -1;

	if (n == 1)
		return 1;

	if ( n > 1 )
		return _sqrt_helper(n, 1);

	return 0;
}

