#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string.
 * @str: pointer to string.
 * Return: void.
 */

void puts_half(char *str)
{
	int i, len, centre;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		centre = len / 2;
		for (i = centre; i < len; i++)
		{
			putchar(str[i]);
																					}
	}
	else
	{
		centre = (len - 1) / 2;
		for (i = centre + 1; i < len; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
