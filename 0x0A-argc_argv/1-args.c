#include <stdio.h>
#include "main.h"
/**
 * main- the function prints the number of the argu
 * @argv: the variable holds the array size
 * @argc: this variable is a counter
 * Return: return 0 value
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
