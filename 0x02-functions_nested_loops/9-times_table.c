#include <stdio.h>
/**
 * main - prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int n, i
	
	for (n > 0; n <= 9; n++)

	for (i = 1; i <= 10; i++)
		putchar("%d * %d = %d\n", n, i, n * i);
	return (0);
}
