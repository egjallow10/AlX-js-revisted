#include "main.h"


char *leet(char *str)
{
	int i = 0, j;

	char letters[] = "aAeEoOtTlL";
	char numbers[]= "4433007711";


	while(str[i] != '\0')
	{
		for( j = 0; letters[j] != '\0'; j++)
		{
			if(str[i] == letters[j])
				str[i] = numbers[j];
		}
		i++;
	}
	return str;
}

