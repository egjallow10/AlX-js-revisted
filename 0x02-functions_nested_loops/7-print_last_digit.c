#include <stdio.h>
#include "main.h"


int print_last_digit(int i)
{
	int result;
	if ( i < 0)
	{
		result = -(i) % 10;
	}
	else
	{
		result = i % 10;
	}

	return result;
}

