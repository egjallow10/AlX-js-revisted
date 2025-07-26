#include "main.h"


void print_array(int *a, int n)
{
	int i = 0;
	while(i < n)
	{
		if(i != n)
		{
			printf("%d", a[i]);
			printf("%c", ',');
			printf("%c", ' ');
			i++;
		}
	}
	printf("%c", '\n');
}
