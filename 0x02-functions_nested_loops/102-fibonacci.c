#include <stdio.h>



int main(void)
{
	unsigned long int i, j, tmp, n;

	i = 1;
	j = 2;

	printf("%lu",i);

	for (n = 1; n < 50;n++)
	{
		printf(", %lu",j);
		tmp = i;
		i = j;
		j += tmp;
	}
	putchar('\n');
	return 0;
}
