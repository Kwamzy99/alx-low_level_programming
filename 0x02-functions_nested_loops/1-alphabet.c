#include "main.h"
/**
 * main - prints alphabet in lowercase
 * Description: prints alphabet
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
