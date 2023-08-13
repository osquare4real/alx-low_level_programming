#include <stdio.h>
/**
 * main - Code to print alphabet without q abd e
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)	
	if (p != 'e' && p != 'q')
	putchar(p);
	putchar('\n');

	return (0);
}
