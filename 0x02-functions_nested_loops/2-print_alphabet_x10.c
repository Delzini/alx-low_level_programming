#include "main.h"
/**
 * print_alphabet_x10 - a to z x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char c, i;
for (i = 0; i <= 9; i++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(i);
	}
_putchar('\n');
}
}
