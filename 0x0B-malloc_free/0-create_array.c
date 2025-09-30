#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *memo;

	memo = malloc(size * sizeof(c));

	if(memo == NULL)
		return (NULL);


	return memo;
	

}
