#include <stdio.h>
#include "main.h"

void times_table(void)
{
	int i, j, ans;
	for( i = 0; i <= 9; i++)
	{
		for( j = 0; j <= 9; j++)
		{
			ans  = i * j;

			if( j != 0)
			{
				putchar(',');
				putchar(' ');

				if( ans < 10)
				{
					putchar(' ');
				}
			}

			if(ans >= 10)
			{
				putchar((ans/10) + '0');
			}
			putchar((ans % 10) +'0');

		}
		putchar('\n');
	}
}

		
