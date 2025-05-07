#include <stdio.h>
#include "main.h"

int main(void)
{
	char ch[8] = "_putchar";
	int i = 0;
	while ( i <= 8)
	{
		_putchar(ch[i]);
		i++;
	}
	putchar('\n');
	return(0);
}

