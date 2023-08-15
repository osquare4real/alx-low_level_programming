#include <stdio.h>
/**
 * main - Code to print a through to z
 *
 * Reture: 0 (Success)
 *
 */
int main(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}

	putchar ('\n');

	return (0);

}
