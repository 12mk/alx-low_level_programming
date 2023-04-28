#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - the function prints all the values of the list
 *@h: pointer to the list
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t L = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		L++;
	}
	return (L);
}

