#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	int i, j;
	for (i = 0; i < 25; i++)
	{
		for( j = 0; j < 25; j++)
		{
			putchar('0');
			putchar(i +'0');
			putchar(':');
			putchar('0');
			putchar(j +'0');
			putchar('\n');

		}

	}
}
