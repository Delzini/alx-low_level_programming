#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */

int main(void)

{

int n;

int lastDigit;

/* Randomnization */

srand(time(0));

n = rand() - RAND_MAX / 2;

lastDigit = n % 10;

/* Conditional if else stm */

if (lastDigit > 5)

{

printf("The last digit of %d is %d and is greater than 5\n", n, lastDigit);

}

else if (lastDigit == 0)

{

printf("The last digit of %d is %d and is 0\n", n, lastDigit);

}

else if (lastDigit < 6 && lastDigit != 0)

{

printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);

}

return (0);
}
