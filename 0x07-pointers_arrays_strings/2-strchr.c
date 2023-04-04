
#include "main.h"
/**
 * _strchr - function that return the char value
 * @s: input add holder
 * @c: input char value
 * Return: return 0 value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
