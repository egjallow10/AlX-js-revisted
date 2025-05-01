#include <stdio.h>


int main(void)
{
	int i = 0;
	char x = 'a';

	while(i < 10 )
	{
		putchar(i + '0');
		i++;
	}

	while ( x <= 'f')
	{
		putchar(x);
		x++;
	}
	return(0);
}





