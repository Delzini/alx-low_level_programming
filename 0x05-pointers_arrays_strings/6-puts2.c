#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other in string.
 * @str: pointer to string
 * Return: void.
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			putchar(str[n]);
		}
		n++;
	}
	putchar('\n');
}
