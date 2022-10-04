#include "main.h"
#include<stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
