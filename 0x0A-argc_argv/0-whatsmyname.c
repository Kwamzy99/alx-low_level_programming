#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: count
 * @argv: array
 * Return: Name
 */
int main (int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
