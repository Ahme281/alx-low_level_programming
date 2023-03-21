#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - a new type struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *  Description: a new type that defines a dog with
 *   its name, age and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
