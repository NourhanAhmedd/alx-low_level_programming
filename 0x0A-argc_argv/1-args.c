#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints the number of arguments passedinto it.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: 0 (Success).
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
