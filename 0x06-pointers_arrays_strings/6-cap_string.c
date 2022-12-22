#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @i: integer
 * Return: capitalizes the words
 */
char *cap_string(char *i)
{
	int a, b;
	int cap = 32;
	int separators[] = {',', ';', '.', '!', '?','"',
	       	'(', ')', '{', '}',' ', '\t', '\n'};

	for (a = 0; i[a] != '\0'; a++)
	{
		if (i[a] >= 'a' && i[a] <= 'z')
		{
			i[a] = i[a] - cap;
		}

		cap = 0;

		for (b = 0; b <= 12; b++)
		{
			if (i[a] == separators[b])
			{
				b = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
