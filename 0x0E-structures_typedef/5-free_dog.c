#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory 
 * @d: pointer to sruct to free
 * 
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
if (d->name != NULL)
free(d->name);
if (d->owner != NULL)
free(d->owner);
free(d);
}
