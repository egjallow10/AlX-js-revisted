#include "main.h"


char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while(*ptr != '\0')
	{
		*ptr++ = *src++;
	}
	
	*ptr = '\0';
	return dest;
}
