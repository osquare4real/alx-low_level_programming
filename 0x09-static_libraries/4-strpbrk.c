#include "main.h"
/**
*_strpbrk - Entry point
*
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
