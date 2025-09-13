#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
	int i, ans;

	if(argc == 1)
	{
		printf("Error\n");
		return 0;
	}

	for ( i = 0; i < argc; i++)
	{
		if(argv[1] && argv[2])
			ans = atoi(argv[1])* atoi(argv[2]);
	}
	printf("%d\n", ans);
	return 0;
}

