#include <stdio.h>
/**
 * main -checks for alphabetic character.
 * Return: 1 if c is aletter, otherwise 0
 */
int _isalpha(int c)
{
	if ('c' > 'a' && 'c'< 'z')
		return (1);
	else
		return (0);

	if ('C' > 'A' && 'C' < 'Z')
		return (1);
	else
		return (0);
}
