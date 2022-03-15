#ifndef _FILE_
#define _FILE_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - new struct
 * @name: name of the dog
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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#define STRLEN(STRING, I)\
do {\
	for (I = 0; STRING[I]; I++)\
	{} \
} while (0)

#define STRCPY(DEST, SRC, I)\
do {\
	for (I = 0; SRC[I]; I++)\
	{\
		DEST[I] = SRC[I];\
	} \
} while (0)



#endif
