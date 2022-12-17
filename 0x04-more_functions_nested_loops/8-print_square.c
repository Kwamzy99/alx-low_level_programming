#include "main.h"
/**
 * print_square - prints a square
 * _putchar: 4 times
 * @size: width and lenght of square 
 * Return: size
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	
		_putchar('\n');
	
	for (a = 0; a < size; i++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
