#include <stdio.h>
/**
 * main - Program that print letter a from z to a alphabet which is backward
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	putchar(b);
	putchar('\n');

	return (0);
}
