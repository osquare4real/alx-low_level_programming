#include "main.h"
/**
 * print_alphabet_x10  - Code that print alphabet ten times
 *
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	for (i = 0; 1 < 10; i++)
	{	for (ch = 'a'; ch < 'z'; ch++)
		{
			print_alphabet_x10(ch);
		}

		print_alphabet_x10('\n');

	}
}
