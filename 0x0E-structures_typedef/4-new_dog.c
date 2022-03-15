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
	int name_len = 0, own_len = 0, i = 0;
	char *c_name = NULL, *c_owner = NULL;
	dog_t *p_ndog = NULL;

	p_ndog = malloc(sizeof(dog_t));
	if (p_ndog == NULL)
		return (NULL);

	STRLEN(name, name_len);
	STRLEN(owner, own_len);

	c_name = malloc(sizeof(char) * name_len);
	if (c_name == NULL)
		return (NULL);

	c_owner = malloc(sizeof(char) * own_len);
	if (c_owner == NULL)
		return (NULL);

	STRCPY(c_name, name, i);
	STRCPY(c_owner, owner, i);

	p_ndog->name = c_name;
	p_ndog->age = age;
	p_ndog->owner = c_owner;

	return (p_ndog);


}
