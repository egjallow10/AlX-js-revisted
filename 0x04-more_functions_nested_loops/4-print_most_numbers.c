#include "main.h"

void print_most_numbers(void)
{
	char c[] = "123456789\n";
	int i = 0;
	while( c[i] != '\n')
	{
		if(c[i] != '2' && c[i] != '4')
		{
			_putchar(c[i]);
		}
		i++;
	}
	_putchar('\n');
}
