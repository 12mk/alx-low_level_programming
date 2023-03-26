#include <stdio.h>
/**
 *main - the main function prints out buzzfuzz
 *Return: return 0 value
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
	if ((x % 5 == 0) && (x % 3 == 0))
	{
		printf("FizzBuzz");
	}
	else if (x % 5 == 0)
	{
		printf("Buzz");
	}
	else if (x % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
