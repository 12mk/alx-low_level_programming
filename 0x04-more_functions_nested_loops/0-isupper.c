#include "main.h"
/**
 *_isupper - check if the given letter is upper case
 *@x: the number to be checked 
 *Return: return 0 value
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return(0);
}
