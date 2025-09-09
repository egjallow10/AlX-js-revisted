#include <stdio.h>
#include "main.h"


int main(int agrc, char *argv[])
{
	(void)argv;
	if(agrc > 0)
	{
		printf("%d\n", agrc);
	}
	else
	{
	
		printf("%d", 0);
	}
	return 0;
}
