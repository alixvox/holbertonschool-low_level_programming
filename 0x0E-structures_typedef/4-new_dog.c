#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: The name of dog
 * @age: Age of dog
 * @owner: The owner of the dog
 *
 * Return: The pointer to the dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}

/**
 * _strdup - Copies a string to a new memory area
 *
 * @str: The string to be copies
 *
 * Return: A pointer to the copy of the string
 */

char *_strdup(char *str)
{
	char *s;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		size++;
		str++;
	}
	str = str - size;
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
