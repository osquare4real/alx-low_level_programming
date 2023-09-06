#include "main.h"
#include <stdsef.h>
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or 0 if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0', i++)
	{
		;
	if (s[i] == c)
		return (&s[i]);
	}

		return (0);
}
