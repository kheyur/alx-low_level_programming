#include "dog.h"
/**
 * init_dog - initialiase a variable of type struct dog
 * @d: struct dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
