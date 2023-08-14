#include <stdlib.h>
#include "dog.h"
char *_strdup(char *);

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	char *n_name;
	char *n_owner;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
		return (NULL);

	n_name = _strdup(name);
	if (n_name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_owner = _strdup(owner);
	if (n_owner == NULL)
	{
		free(n_dog);
		free(n_name);
		return (NULL);
	}

	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}

/**
 * _strdup - creates a duplicate for string
 * @s: pointer to string to be copied
 * Return: a pointer to the duplicated string or NULL when either
 * str == NULL or memory could not be allocated
 */
char *_strdup(char *s)
{
	char *arr;
	unsigned int i, j;

	i = j = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	while (s[j])
	{
		arr[j] = s[j];
		j++;
	}
	arr[j] = 0;
	return (arr);
}
