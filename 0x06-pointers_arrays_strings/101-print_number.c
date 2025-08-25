#include "main.h"


void print_number(int n)
{
	int num, div = 1;


	if(n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	
	while( num / div >= 10)
	{
		div *= 10;
	}

	while(div > 0)
	{
		_putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
}


