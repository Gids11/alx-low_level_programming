#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining a new structure for dog
 * @name: name of dog
 * @age: the age
 * @owner: dog's owner
 */
struct dog
{
	char  *name;
	float age;
char  *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
