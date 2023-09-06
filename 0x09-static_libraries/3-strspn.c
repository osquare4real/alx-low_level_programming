#include "main.h"
/**
*_strspn - Code to chech  number of n
*@s:segment targeted
*@accept:reference bytes container
*
*Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
