#include <stdio.h>
/**
 * main - This program print the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

printf("Size of an char: &1u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: &1u byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: &1u byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long: &1u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: &1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
