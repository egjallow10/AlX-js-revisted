#include <stdio.h>
#include "main.h"


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 0;
	}
	if (n == 0)
	{
		_putchar(0);
		return 0;
	}
	if (n < 0)
	{
		_putchar('-');
		return -1;
	}
	return 0;
}


