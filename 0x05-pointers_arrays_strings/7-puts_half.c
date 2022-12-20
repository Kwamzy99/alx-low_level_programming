#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string 
 * Return: string
 */
void puts_half(char *str)
{
	int a, b, l;

	l =  0;
	
	for (a = 0; str[a] != '\0'; a++)
		l++;

	b = (l / 2);

	if ((l % 2) == 1)
		b = ((l + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

