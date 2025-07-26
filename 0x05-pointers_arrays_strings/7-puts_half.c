#include "main.h"


void puts_half(char *str)
{
	int i = _strlen(str) / 2;

	while( str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
