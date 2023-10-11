#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog struct.
 * @name: it's name of dog
 * @age: it's age of dog
 * @owner: it's owner of dog
 *
 * Description: information of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
