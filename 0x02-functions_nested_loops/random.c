/* random */

#include <stdio.h>


int our_random_fun()
{
	int x;

	x = rand();
	return x;
} 

int main()
{
	int random;
	random = our_random_fun();
	printf("%d\n", random);
	return 0;
}
