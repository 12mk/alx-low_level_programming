#include "main.h"
/**
 *positive_or_negative - checks if a number is positive or negative
 *@i: the number to be checked
 *Return: return 0 value
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}