#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string pointer
 * Return: return length
 */
int _strlen(char *s)
{
	int n;

	while (*s != '\0')
	{
		n = 1;
		*s = *s + 1;
	}
	return (n);
}
		
