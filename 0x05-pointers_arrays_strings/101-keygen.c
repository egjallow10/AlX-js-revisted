#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void)
{
	int i, sum = 0;
	char password[7];

	srand(time(NULL));

	for( i = 0; i < 5; i++)
	{
		password[i] = (rand() % 78) + 47;
		sum += password[i];
	}

	password[5] = 2772 - sum;
	password[6] = '\0';
	printf("%s", password);
	return(0);
}
