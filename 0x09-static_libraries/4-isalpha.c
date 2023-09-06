#include "main.h"
/**
 *_isalpha - Code to check if a character is alphabetical
 *@c: character to be verified
 *Return: return 1 ic c is a letter, 0 otherwise
 */
int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
