#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the opcodes of its own main function.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: 0 (Success).
*/
int main(int argc, char **argv)
{
	int n;
	char *pointer;

	pointer = (char *)main;
	/* It will check if (argc) is not equal (2): */
	if (argc != 2)
	{
		/* Then it will print the error message: */
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	/* It will check if (n) is less than (0): */
	if (n < 0)
	{
		/* Then it will print the error message: */
		printf("Error\n");
		exit(2);
	}

	/* While loop: */
	while (n--)
	{
		printf("%02hhx%s", *pointer++, n ? " " : "\n");
	}

	return (0);
}
