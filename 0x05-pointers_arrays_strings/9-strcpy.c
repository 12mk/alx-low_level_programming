#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (x = 0; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
