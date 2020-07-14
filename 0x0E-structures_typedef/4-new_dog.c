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
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t));

	if (!dog1)
		return (NULL);

	dog1->name = _strdup(name);

	if (name && !dog1->name)
		return (free(dog1), NULL);

	dog1->owner = _strdup(owner);

	if (owner && !dog1->owner)
		return (free(dog1->name), free(dog1), NULL);

	dog1->age = age;

	return (dog1);
}

/**
 * *_strdup - duplicate a string
 * @str: string pointer
 * Return:return value NULL and pointer a
 */
char *_strdup(char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);

}
