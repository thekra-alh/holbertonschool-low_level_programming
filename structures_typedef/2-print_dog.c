#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: pointer to struct dog
*
* Description:
* If any element of the struct is NULL, prints "(nil)" instead.
* If d is NULL, prints nothing.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
