#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Write a function that prints a struct dog.
 * @d: A variable of type struct dog.
*/
void print_dog(struct dog *d)
{
	/* It will check if (d) exists or not */
	if (d)
	{
		/*It will print a struct dog: name, dog, owner. */
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
