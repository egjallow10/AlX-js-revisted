#include <stdio.h>


int main(void)
{
	int i;
	unsigned int prev = 1, curr = 2, next;

	printf("%d, %d",prev, curr);
	for (i = 3; i < 98; i++)
	{
		next = prev - curr;
		printf(", %u",next);
		prev = curr;
		curr = next;
	}
	putchar('\n');
	return 0;
}
