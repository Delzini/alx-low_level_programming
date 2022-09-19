#include "main.h"
#include <stdio.h>

/**
 * _puts - print string on stout
 * @str: string to print
 *
 * Return: On success no error
 */

void puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
