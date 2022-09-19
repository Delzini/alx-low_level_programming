#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a reversed string
 * @s: pointer on string
 * Return: null
 */

void print_rev(char *s)
{
	int length, last;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	last = length - 1;
	for (; last >= 0; last--)
	{
		putchar(s[last]);
	}
	putchar('\n');
}
