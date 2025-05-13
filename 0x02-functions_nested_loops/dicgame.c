/**Creating a simple dice game**/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



/*
   function to generate random number
   max: interger
*/

int my_random(int max)
{
	int num;

	srand(getpid());

	num = rand() % max + 1;
	return num;
}

int main()
{
	int guess, bet, dice, balance = 1000;

	printf("Place your bet ");
	fflush(stdout);

	scanf("%d", &bet);
	//printf("%d\n",bet);

	printf("Guess a number form 1- 6: ");
	fflush(stdout);
	scanf("%d",&guess);

	printf("%d\n",guess);

	if (guess == 0)
	{
		printf("Guess can't be 0 You lost!!!!\n");
		return 0;
	}

	sleep(2);
	printf("%d",my_random(6));






	return 0;
}
