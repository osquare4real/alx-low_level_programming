#include <stdio.h>
/**
 * main - Code that print Alphabet and number into sixteen figures
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int num;
	char lett;

	for (num = 0; num < 10; num++)
	for (lett = 'a'; lett <= 'f'; lett++)
	putchar(lett);
	putchar(num);
	putchar('\n');

	return (0);
}
