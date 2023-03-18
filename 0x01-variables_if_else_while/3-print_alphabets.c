#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints the alphabet in lowercase, and then
 * in uppercase, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	char character1 = 'a';
	char character2 = 'A';

	while (character1 <= 'z')
	{
		putchar(character1);
		character1++;
	}

	while (character2 <= 'Z')
	{
		putchar(character2);
		character2++;
	}
	putchar('\n');
	return (0);
}
