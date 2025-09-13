#include <stdio.h>
#include "main.h"


int main(int agrc, char *argv[])
{
	(void)argv;
	if(agrc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", agrc - 1);
		
	}
	return 0;
}
