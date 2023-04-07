#include <stdio.h>
#include "main.h"
/**
 * main - the function prints out the arguments
 * @argv: the variable holds arg
 * @argc: the varibale holds the counter
 * Return: return 0 value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
