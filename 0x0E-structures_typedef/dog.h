#ifndef DOG_H
#define DOG_H
#include<stdlib.h>
#include<stdio.h>
/**
 * struct dog - struct dog verification
 * @name: the name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

char *_strdup(char *str);
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
