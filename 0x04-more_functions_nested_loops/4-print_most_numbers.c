#include "main.h"
/**
 *print_most_numbers - the function print num
 *
 *Return: return value
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 4 || x == 2)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
