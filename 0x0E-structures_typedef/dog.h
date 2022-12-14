#ifndef DOG__H
#define DOG__H

/**
 * struct dog - dog structure
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
