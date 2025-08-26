#include "main.h"


/**
  _memcpy - copies n bytes from the memory area to another
  @dest: Destination memory
  @scr: Source memory
  @n: Number of bytes
  Retrun : Pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for( i = 0; i < n; i++)
		dest[i] = src[i];

	return dest;
}

