#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] ! = '\0')
	{
		dest[a] = src[b];
	}

	dest[a] = '\0';
	return (dest);
}
