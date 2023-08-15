#include <stdio.h>
/**
 * main - Code that print combination of single digit number
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int num;

	for (num = 0 ;  num < 10 ; num++)
	{
		if (num == 9)
			putchar(num + '0');
		else
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
		}
	}

return (0);
}
