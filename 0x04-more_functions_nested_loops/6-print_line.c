#include "main.h"
/**
 *print_line - the function that prints out line
 *@n: the number returns
 *Return: return 0 value
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 0; x <= n; x++)
	{
		_putchar(95);
	}
	_putchar('\n');
	}
}
