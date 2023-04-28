#include <stdlib.h>
#include "lists.h"

/**
 *list_len - returns the numbers of values in a list
 *@h: pointer
 *Return: return the number
 */
size_t list_len(const list_t *h)
{
	size_t L = 0;

	while (h)
	{
		L++;
		h = h->next;
	}
	return (L);
}
