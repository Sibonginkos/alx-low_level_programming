#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Typedef for struct
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
