#include "main.h"

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints _putchar, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	char word[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(word[c]);
	}
	_putchar('\n');
	return (0);
}
