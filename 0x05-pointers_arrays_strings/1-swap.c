#include "main.h"
/**
 * swap_int - Entry point
 *
 * @a: the swap number
 * @b: the secaed swap number
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int s1 = *a;
	int s2 = *b;
	*a = s2;
	*b = s1;
}
