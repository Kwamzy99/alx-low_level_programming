#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string pointer
 * Return: return length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		*a++;
	return (a);
}
		
