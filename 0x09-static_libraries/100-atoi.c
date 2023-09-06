#include "main.h"

/**
 * _atoi - Code to changes a string to an int
 * @s: the string to be changed
 *
 * Return: integer unsig
 */

int _atoi(char *s)
{
	int sign = 1,  i = 0;
	unsigned int unsig = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
			{
			if (s[i]  == '-')
			sign *= -1;
			i++;
			}

			while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
			{

			unsig = (unsig * 10) + (s[i] - '0');
					i++;

			}
				unsig *= sign;

				return (unsig);
}
