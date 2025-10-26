#include "main.h"


void *malloc_checked(unsigned int b)
{
    

    void *memo = malloc(b);
    if(memo == NULL)
    {
        exit(98);
    }
    return memo;
}