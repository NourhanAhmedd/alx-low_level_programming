#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%i", number);
		number++;
	}
	printf("\n");
	return (0);
}
