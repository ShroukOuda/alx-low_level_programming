#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init fun.
 * @d: it's a struct
 * @name: it's name of dog
 * @age: it's age of dog
 * @owner: it's owner of dog
 *
 * Description: information of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
