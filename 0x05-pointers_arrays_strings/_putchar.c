#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c
 * return: c if 1 else 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
