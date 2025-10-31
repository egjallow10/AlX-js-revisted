#include <stdio.h>
#include "main.h"


/**
 *free_dog(dog_t *d) - free dogs
 * @d: pointer 

 */

void free_dog()
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
		free(d);
	}

}

