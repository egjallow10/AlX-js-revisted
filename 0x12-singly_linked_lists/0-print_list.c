#include "lists.h"


size_t print_list(const list_t *h)
{

	int i;
	while(h != NULL)
	{
		h=h->next;
		i++;
	}
	return i;
}


