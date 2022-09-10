#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
int x, n;
for (x = '0'; x <= '9'; x++)
{
	for (n = '0'; n <= '9'; n++)
	{
		if (x < n)
		{
		putchar(x);
		putchar(n);
			if (x != '8' && n != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
