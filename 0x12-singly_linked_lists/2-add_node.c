#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node - the function add node at the start of the ll
 *@head: double pointer of ll
 *@str: string to add
 *Return: return the address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *head_new;
	unsigned int leng = 0;

	while (str[leng])
		 leng++;

	 head_new = malloc(sizeof(list_t));
	 if (!head_new)
		 return (NULL);

	 head_new->str = strdup(str);
	 head_new->len = leng;
	 head_new->next = (*head);
	 (*head) = head_new;

	 return (*head);
}
