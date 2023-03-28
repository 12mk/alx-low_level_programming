#include "main.h"
/**
 *_strlen - the function return the length of a string
 *@s: string value
 *Return: return the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
