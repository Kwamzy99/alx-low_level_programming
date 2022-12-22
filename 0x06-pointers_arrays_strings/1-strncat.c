#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination of string
 * @src: string to be copied
 * @n: integer
 * Return: two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;
	
	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
			b = n;
	}
	return (dest);
}
