#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: the number of which the sign will be printed
 * Return: 1 , 0 , -1
 */
int print_sign(int n)
{
	if (n > 0)
		putchar('+');
		return (1);
	else 
		if(n < 0)
			putchar('-');
			return (-1);
		else
			if(n == 0)
				putchar('0');
				return (0);
}
