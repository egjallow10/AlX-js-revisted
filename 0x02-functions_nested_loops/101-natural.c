#include <stdio.h>


int main(void)
{
	int i, sum = 0;

	for ( i= 0; i <1024; i++)
	{
		if (!(i % 3 && i % 5))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}
