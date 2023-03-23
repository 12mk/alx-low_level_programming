#include "main.h"
/**
 *print_alphabet - prints out ten times the alphabet
 *return: return value 0
 */
void print_alphabet(void)
{
	char i;
	int j;

	while (j <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
