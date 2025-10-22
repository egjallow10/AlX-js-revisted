#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if error
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len;

    if (str == NULL)
        return (NULL);

    len = 0;
    while (str[len])
        len++;

    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        dup[i] = str[i];
    dup[i] = '\0';

    return (dup);
}

