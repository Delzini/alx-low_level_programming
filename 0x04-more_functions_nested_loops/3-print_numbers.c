#include "main.h"
#include <stdio.h>

/**
* print_numbers - fuction that print
* number from 0 to 9
*
* Return: returns null
*/

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10)
