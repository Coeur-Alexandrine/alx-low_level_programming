#include <stdio.h>
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

free(d->name);
free(d->owner);
free(d);
}
