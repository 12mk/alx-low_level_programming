#include "main.h"
/**
 * _strstr - the function locates a substring
 * @haystack: input value holder
 * @needle: input value holder
 * Return: return 0 value
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *k = needle;

		while (*i == *k && *k != '\0')
		{
			i++;
			k++;
		}

		if (*i == '\0')
			return (haystack);
	}
	return (0);
}
