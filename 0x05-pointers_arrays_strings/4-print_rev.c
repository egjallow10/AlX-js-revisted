#include "main.h"


void print_rev(char *s)
{
	int len = _strlen(s);

	while(s[len] >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
