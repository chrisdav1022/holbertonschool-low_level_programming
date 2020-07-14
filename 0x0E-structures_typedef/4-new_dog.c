#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - pointer the new dog
 * @name:pointer to name the dog
 * @age: age the dog
 * @owner: name owner of the dog
 * Return: return value to pointer and malloc
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *b;

	b = malloc(sizeof(dog_t));

	if (!b)
	{
		return (NULL);
	}

	b->name = _strdup(name);

	if (name && !b->name)
	{
		return (free(b), NULL);
	}

	b->age = age;

	b->owner = _strdup(owner);

	if (owner && !b->owner)
	{
		return (free(b->name), free(b), NULL);
	}

	return (b);
}

/**
 * *_strdup - duplicate a string
 * @str: string pointer
 * Return:return value NULL and pointer a
 */
char *_strdup(char *str)
{
	unsigned int i, n;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (n = 0; str[n]; n++)
	{}

	a = malloc(n + 1 * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		a[i] = str[i];

	return (a);
}
