#include "main.h"
/**
 *_isalpha - function to check if is a letter, lowercas and upper case
 *@c: is the int use for the argument
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
