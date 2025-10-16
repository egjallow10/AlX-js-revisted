#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{

	char *memo;
	unsigned int i;

	if (size == 0)
		return 0;

	memo = malloc(size * sizeof(c));

	if(memo == NULL)
		return (NULL);


	for(i = 0; i < size; i++)
		memo[i] = c;


	return memo;
	

}
