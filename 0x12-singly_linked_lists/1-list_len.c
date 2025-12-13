#include "lists.h"

size_t list_len(const list_t *h)
{
    
    size_t  i = 0; 
    const list_t *ptt = h;
    while (ptt != NULL)
    {
        i++;
        ptt = ptt->next;
    }
    
    return i;
}