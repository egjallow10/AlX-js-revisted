#include "main.h"


/**
 * print_chestboard - prints ans 8x8 chestboadr
 * @a: The *8X8 cheatboard array
 */

void print_chestboard(char (*a)[8])
{
	int i, j;

	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

