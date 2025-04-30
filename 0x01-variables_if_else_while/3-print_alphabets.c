#include <stdio.h>


int main(void)
{
	char ch = 'a';

	char cp = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch ++;
	}


	while (cp <= 'Z')
	{
		putchar(cp);
		cp++;
	}
	putchar('\n');
	return(0);
}
