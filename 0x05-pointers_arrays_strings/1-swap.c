#include "main.h"
/**
 *swap_int - the function swap the value
 *@a: value to swap
 *@b: valu to swap
 *return: return 0 value
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
