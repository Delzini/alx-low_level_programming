#include "main.h"
#include <stdio.h>

/**
 * _strlen - find the length of string
 * @s: char variable
 * Return: returns length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
