#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	char character = 'a';

	while (character <= 'z')
	{
		if (character == 'e' || character == 'q')
			character++;
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
