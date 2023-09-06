#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*
*@s:string targeted
*@c:character targeted
*
*Return: Always 0 (success)
*/
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
	if (s[a] == c)
		return (&s[a]);
	}
	return (0);
}
