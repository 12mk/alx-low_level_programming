#include <stdio.h>
/**
 *main - main function
 *Return: return 0 value
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
