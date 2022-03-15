#include "dog.h"
/**
 * new_dog - crate new values to the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: null if pointer fails and pointer if goes right
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_ndog;

	p_ndog = malloc(sizeof(dog_t));
	if (p_ndog == NULL)
		return (NULL);
	p_ndog->name = name;
	p_ndog->age = age;
	p_ndog->owner = owner;

	return (p_ndog);
}
