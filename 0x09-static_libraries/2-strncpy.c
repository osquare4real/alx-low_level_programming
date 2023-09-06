#include "main.h"
/**
*_strncpy - Code  that copies a string
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++
	}

	return (dest);
}
