#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: value
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
