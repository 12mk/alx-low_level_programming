#include "main.h"
/**
 *rev_string -the function reverse the string
 *@s: input string
 *Return: return the function
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[ccunter] != '\0')
		counter++;
	for (i = 0; i < countter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
