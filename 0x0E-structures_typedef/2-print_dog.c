#include "doh.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: struct dog
 *
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				(*d).name != NULL ? d->name : "(nil)",
				(*d).age,
				(*d).owner != NULL ? d->owner : "(nil)");
	}
}
