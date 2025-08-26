#include "main.h"

/*
   _strspn - Get the length of prefix
   @s: Then string to check
   @accept: the string containing acceptable characters
   Return: Number of bytes in the initial segment

 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while(*s != '\0')
	{
		for(i = 0; accept[i] != '\0'; i++)
		{
			if(*s ==accept[i])
				break;
		}
		if(accept[i] == '\0')
			return count;
		count++;
		s++;
	}
	return 0;
}
