#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", h->len);
			h = h->next;
			++size;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		++size;
	}
	return (size);
}
