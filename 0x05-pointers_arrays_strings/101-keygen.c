#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The Entry Point.
 *
 * Description: Create a program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	char character;
	int s;

	srand(time(NULL));

	while (s <= 2645)
	{
		character = rand() % 128;
		s = s + character;
		putchar(character);
	}
	putchar(2772 - s);
	return (0);
}
