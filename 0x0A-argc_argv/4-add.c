#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_string - Check the string.
 *
 * @s: The string (array).
 *
 * Return: 0 (Success).
*/

int check_string(char *s)
{
	unsigned int length;

	length = 0;
	while (length < strlen(s))
	{
		if (!isdigit(s[length]))
		{
			return (0);
		}
		length++;
	}
	return (1);
}

/**
 * main - Write a program that adds positive numbers.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: 0 (Success).
*/

int main(int argc, char *argv[])
{
	int length;
	int number;
	int SUM;

	length = 1;
	SUM = 0;
	while (length < argc)
	{
		if (check_string(argv[length]))
		{
			number = atoi(argv[length]);
			SUM = SUM + number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		length++;
	}
	printf("%d\n", SUM);
	return (0);
}
