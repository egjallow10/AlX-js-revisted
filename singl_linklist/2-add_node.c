#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{

    list_t *current;
    size_t len;
    if (str == NULL)
    {
        len = 0;
    }else{
        len = strlen(str);
    }

    current = (list_t *)malloc(sizeof(list_t));

    if (current == NULL)
    {
        return (NULL);
    }
    
    while (current->next != NULL)
    {
       current = current->next;
    }

    current->next = (list_t *) malloc(sizeof(list_t));
    current->len = len;
    current->str = strdup(str);
    current->next = *head;
    *head = current;
    return (current);
    
}