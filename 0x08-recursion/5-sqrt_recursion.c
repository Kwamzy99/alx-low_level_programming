#include "main.h"
/**
 * sqrt_check - checks for square root
 * @a: int
 * @b: int
 * Return: square root
 */
int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}

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
