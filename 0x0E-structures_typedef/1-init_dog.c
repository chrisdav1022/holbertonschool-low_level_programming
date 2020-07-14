#include "dog.h"
/**
 * init_dog - init nom dog
 * @d: pointer to dog
 * @name: pointer to nom the dog
 * @age: age the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
