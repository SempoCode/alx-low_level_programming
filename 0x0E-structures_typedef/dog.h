#ifndef DOG_H
#define DOG_H
/**
 * struct dog - This is a structure
 * @name: parameter1
 * @age: parameter2
 * @owner: parameter2
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG */
