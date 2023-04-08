#include <stdio.h>
#include "main.h"

/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: 0 (Success).
*/

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
