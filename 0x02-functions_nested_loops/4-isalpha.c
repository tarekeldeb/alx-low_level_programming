#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((65<=c && c<=90) || (97<=c && c<=122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
