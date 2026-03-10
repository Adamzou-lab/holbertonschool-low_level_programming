#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Name to set.
 * @age: Age to set.
 * @owner: Owner to set.
 *
 * Description: Assigns the provided values to the members of the
 * structure pointed to by d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
