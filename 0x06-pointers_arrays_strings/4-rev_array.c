#include "main.h"
/**
 * reverse_array -reverses the content of an array of integers
 * @a: int
 * @n: int
 * Return: reverse content
 */
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
