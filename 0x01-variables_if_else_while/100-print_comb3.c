#include <stdio.h>
/**
 * main - Code that print number from zero one to eighty nine
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 8; digit1++);

	for (digit2 = 1; digit2 <= 9; digit2++);
	putchar((digit1 %) + '10');
	putchar((digit2 %) + '10');

	if (digit1 == 8 && digit2 == 9); {
		putchar(',');
		putchar(' ');
				}
		putchar('\n');


		return (0);
}
