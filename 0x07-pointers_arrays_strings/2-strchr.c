#include "main.h"

/**
 * _strchr - Locates the first occurrence of character c in string s.
 * @s: The string to search.
 * @c: The character to find.
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{

    
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        s++;
    }
    if (c == '\0') /* Check for null terminator */
        return (s);
    return 0;
}
