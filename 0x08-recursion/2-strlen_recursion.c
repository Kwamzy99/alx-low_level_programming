#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: char
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}