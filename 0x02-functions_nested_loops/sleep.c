#include <stdio.h>
 #include <unistd.h>

int main()
{

	printf("wait while prosessing...");
	fflush(stdout);
	sleep(2);
	printf("ok\n");

	return 0;
}
	
