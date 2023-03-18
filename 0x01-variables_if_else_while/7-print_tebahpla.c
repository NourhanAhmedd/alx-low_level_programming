#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	char character = 'z';

	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
