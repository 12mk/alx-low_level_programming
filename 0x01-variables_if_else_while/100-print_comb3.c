#include <stdio.h>
/**
 *main - main function
 *Return: return 0 value
 */
int main(void)
{
	int i;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
		{
			if (i < k && i != k)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
