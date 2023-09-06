#include "main.h"

/**
 * _atoi - changes a string to an int
 * @s: the string to be changed
 *
 * Return: the converted int
 */

int _atoi(char *s)
{
	int sig = 1,  i = 0;
	unsigned int unsig = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0'
			{
			if (s[i]  == '-')
			sig *= -1;
			i++;
			}

			while (s[i]  <= '9' && (s[i]  >= '0' && s[i] != '\0'))
			{

			unsig = (unsig * 10 + (s[i] - '0');
					i++;

					}
					unsig *= sig;
					return (unsig);
					}
