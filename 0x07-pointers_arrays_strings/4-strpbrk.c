#include "main.h"

/**
  _strpbrk - Search a string for any a set of bytes
  @s: The string to search
  @accept: The string containing bytes to match
  Return: Pointer to the the firsr matchig in s
  */


char *_strpbrk(char *s, char *accept)
{
	int i;

	while(*s != '\0')
	{
		for(i = 0; accept[i] != '\0'; i++)
		{
			if( *s == accept[i])
				return s;
		}
		s++;
	}
	return 0;
}
