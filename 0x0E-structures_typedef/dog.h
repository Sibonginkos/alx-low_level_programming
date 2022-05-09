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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
