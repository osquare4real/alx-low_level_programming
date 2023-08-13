#include <stdio.h>
/**
 * main - code to print lower and uppercase alphabet
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char o;
	for (o = 'a'; o <= 'z'; o++)
	putchar(o);

	for (o = 'A'; o <= 'Z'; o++)
	putchar(o);
	putchar('\n');
	
	return (0);
}
