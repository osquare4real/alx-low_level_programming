#include <stdio.h>
#include <unistd.h>
/**
 * main - Write a C program that prints exactly
 *
 * Return: always 1 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
