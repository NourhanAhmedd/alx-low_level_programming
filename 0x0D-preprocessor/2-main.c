#include <stdio.h>

/**
 * main - Write a program that prints the name of the file it was
 * compiled from, followed by a new line.
 * Return: 0 (Success).
*/

int main(void)
{
	/* printf - To print the name of the file. */
	printf("%s\n", __FILE__);

	return (0);
}
