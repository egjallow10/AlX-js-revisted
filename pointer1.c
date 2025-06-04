#include <stdio.h>
#include <string.h>

int main(){
	char str[32];
	char *p;
	int integer;
	int *i;

	strncpy(str, "Hello world", 31);
	p = str;
	integer = 9000;

	i = &integer;

	printf("%p\n",i);
	return(0);
}
