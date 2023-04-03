#include "main.h"
/**
 *_memset - the function print a constant byte
 *@s: the pointer value holder
 *@b: the value holder variable
 *@n: size holder
 *Return: return the address
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
