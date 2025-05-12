#include <stdio.h>
#include "main.h"

int _islower(int c)
{
	char ch = 'a';
	if (c >= ch && c <= 'z')
	{
		return 1;
	}
	return 0;
}
