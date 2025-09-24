#include <stdio.h>

/**
 * print_school - prints "ALX"
 *
 * Return: nothing.
 */


void segf(void)
{
	char str[]= "ALX";
	str[0] = 's';
	printf("%s\n", str);
}

/**
 *  main - concept introduction
 *
 * Return: 0.
 */

int main(void)
{
	segf();
	return (0);
}

