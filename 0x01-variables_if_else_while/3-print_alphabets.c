#include <stdio>
/**
 *main - main function
 *Return: return 0 value
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(tolower(i));
	putchar("\n");
	return (0);
}
