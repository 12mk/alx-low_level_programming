#include "main.h"
/**
 *_memcpy - the function copy the mem value
 *@dest: holds add
 *@src: copy add
 *@n: index
 *Return: return the copied add
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int x = n;
	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
