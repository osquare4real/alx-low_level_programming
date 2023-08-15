#include "main.h"
#include <stdio.h>
/**
 * main - Code to print a through to z
 *
 * Reture: 0 (Success)
 *
 */
void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(p);
	}

	putchar ('\n');

	return (0);

}
