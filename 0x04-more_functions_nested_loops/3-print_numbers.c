#include "main.h"

void print_numbers(void)
{
	char c[] = "123456789\n";
	int i = 0;
	while( c[i] != '\n')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
