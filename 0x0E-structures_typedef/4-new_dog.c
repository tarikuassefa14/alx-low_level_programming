#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - The lenth of the string to be get
 *
 * @str: The string
 *
 * Return: The legnth
*/
int _strlen(const char *str)
{
	int leng = 0;

	while (*str++)
		leng++;
	return (leng);
}
/**
 * _strcopy - copy the second string form the first one
 *
 * @src: copyied string
 * @dest: the string to be copy
 *
 * Return: the address fo destination character
*/
char *_strcopy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}
/**
 * new_dog - the function of the created a new dog
 *
 * @name: The pointer to the name of dog
 * @age: The dog age
 * @owner: The pointer to dog owner name
 *
 * Return: pointer to struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	my_dog = (dog_t *) malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*my_dog).name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*my_dog).owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcopy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcopy(my_dog->owner, owner);

	return (my_dog);
}
