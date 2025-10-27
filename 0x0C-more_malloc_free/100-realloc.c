#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to newly allocated memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_ptr;
    unsigned int i;


    if(ptr == NULL)
        return(malloc(new_size));

    if(new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return(NULL);
    }

    if(new_size == old_size)
        return ptr;
    
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return NULL;
    }

    for ( i = 0; i < old_size && i < new_size; i++)
    {
        new_ptr[i] = ((char *)ptr)[i];
    }

    free(ptr);
    return (new_ptr);
    
    
}