#include "dog.h"
/**
 * free_dog - free dogs memory
 * @d: pointer of dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
