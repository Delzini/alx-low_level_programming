#include "main.h"
#include <stdio.h>

/**
 * _puts - print string on stout
 * @str: string to print
 *
 * Description: print a string
 * on success: return no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		putchar(*str);
		i++;
		str++;
	}
	putchar('\n');
}
