#include "main.h"


/**
  _memset - Fills the n bytes of memory
  @s: ointer to the memory
  @b: The bytes to fill
  @n: Number of bytes
  Return: Pointer to th memory
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for( i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
