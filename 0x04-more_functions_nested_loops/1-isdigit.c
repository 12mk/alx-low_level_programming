#include "main.h"
/**
 *_isdigit - the function to check digit
 *@c: the number to be checked
 *Return: return the value of the function
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
