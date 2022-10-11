#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct to create type of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * 
 * Description: creates a struct for dog that stores data for it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
