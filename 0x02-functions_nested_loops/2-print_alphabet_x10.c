#include "main.h"
/**
 * main - Code that print alphabet ten times
 * 
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i=0;

	while (i < 10)
	{
		ch = 'a',
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n')
		i++;
	}
}
