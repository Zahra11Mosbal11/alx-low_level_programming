#include "main.h"
#include <string.h>
/**
 * reverse_array - Entry point
 *
 *@n: the number.
 *@a: the first string
 *Return: void
*/
void reverse_array(int *a, int n)
{
	int length = n;
	int i;
	int j = 0;

	for (i = length - 1; i >= j; i--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		j++;
	}
}
