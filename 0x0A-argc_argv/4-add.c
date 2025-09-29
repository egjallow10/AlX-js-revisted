#include <stdio.h>
#include <stdlib.h>


int main(int argc, char argv[])
{
	int i, sum = 0;

	for(i = 0; i < argc; i++)
	{
		if( atoi(argv[i]) >= 48 && atoi(argv[i]) <= 57)
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d", sum);
	return 0;
}


