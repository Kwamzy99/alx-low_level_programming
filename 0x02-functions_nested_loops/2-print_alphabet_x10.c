#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
		putchar((letter x 10) + '0');

	putchar('\n');
}
