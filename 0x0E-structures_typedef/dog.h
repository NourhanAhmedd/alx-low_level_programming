#ifndef DOG_FILE_H
#define DOG_FILE_H
/**
 * struct dog - Define a new type struct dog with the following elements.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
