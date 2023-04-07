#include <stdio.h>
#include "main.h"
/**
 * main - the function will print the name
 * @argc: the counter of argument
 * @argv: the vector of the counter
 * Return: return 0 value
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
