#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 *
 *
 * Return: Always (Success)
 *
 */

int main(void)

{

int n; /* Integer variable declaration  */
/* Random fuction initiatization */
srand(time(0));

n = rand() - RAND_MAX / 2;
/* Conditional if...Else statement initiatization */
if (n > 0)
{
printf("%d is positive\n", n);
}

else if (n == 0)
{
printf("%d is zero\n", n);
}

else
{
printf("%d is negative\n", n);
}

return (0);

}
