#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: char
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	else
		return;
	_putchar(*s);
}
