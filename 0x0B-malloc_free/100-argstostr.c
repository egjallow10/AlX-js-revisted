#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector (array of strings)
 *
 * Return: pointer to new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k=0, total_len = 0;

	if(ac == 0 || av == NULL)
		return (NULL);

	for(i = 0; i < ac; i++)
	{
		for(j=0; av[i][j]; j++)
			total_len++;

		total_len++;

	}


	str = malloc(sizeof(char) * (total_len + 1));
	if(str == NULL)
		return (NULL);

	for(i = 0; i < ac; i++)
	{
		for(j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}

	

