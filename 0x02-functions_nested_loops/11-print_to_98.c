#include <stdio.h>
#include "main.h"

/**
  *print_to_98 returns the naturals numbers
  *
  */

void print_to_98(int n)
{
	while(n != 98)
	{
		printf("%d, ",(n > 98)? n--: n++);
	}
	printf("98\n");
}

