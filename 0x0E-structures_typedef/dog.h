#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog - struct
 */
typedef struct dog dog_t;

/**
 * struct dog - struct to create type of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * 
 * Description: creates a struct for dog that stores the data
 * for the dog's name, age and name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
