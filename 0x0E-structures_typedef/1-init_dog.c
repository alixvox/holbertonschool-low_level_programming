#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog!
 *
 * @d: The dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: The initialized dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
