#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the now dog struct whoose variable is to be
 * initialized
 *
 * @d: pointer to bethe struct of the new dog
 * @name: name of the dog
 * @age: age of the new dog
 * @owner: the owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
