#include "main.h"
/**
 *puts2 - prints every other char
 *@str: input
 *Return: return value
 */
void puts2(char *str)
{

	int i = 0;
	int x = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	x = i - 1;
	for (z = 0; z <= x; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
