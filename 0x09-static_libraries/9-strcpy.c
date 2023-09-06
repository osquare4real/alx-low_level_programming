#include "main.h"
/**
* _strcpy - Code to  Copy paste string
*@dest: Destination
*@src: copy from
*Return: string
*/
char *_strcpy(char *dest, char *src)
{

	int i = 0;
	int y = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for ( ; y < i; y++)
	{
		dest[y] = src[y];
	}
		dest[i] = '\0';
	return (dest);
}
