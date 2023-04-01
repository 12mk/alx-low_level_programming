#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @z: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int z)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (x < z && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}
