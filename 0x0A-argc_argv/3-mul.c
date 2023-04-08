#include <stdio.h>
#include "main.h"

/**
 * _atoi - This function will convert the string to an integer.
 *
 * @s: The string.
 *
 * Return: It will return (number).
*/

int _atoi(char *s)
{
	int index = 0;
	int j = 0;
	int i = 0;
	int Digit = 0;
	int number = 0;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (index < length && i == 0)
	{
		if (s[index] == '-')
		{
			++j;
		}
		if (s[index] >= '0' && s[index] <= '9')
		{
			Digit = s[index] - '0';
			if (j % 2)
			{
				Digit = -Digit;
			}
			number = number * 10 + Digit;
			i = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
			{
				break;
			}
			i = 0;
		}
		index++;
	}
	if (i == 0)
	{
		return (0);
	}
	return (number);
}

/**
 * main - Write a program that multiplies two numbers.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: 0 (Success) or 1 (Error).
*/

int main(int argc, char *argv[])
{
	int number_1;
	int number_2;
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("There is an error..\n");
		return (1);
	}
	number_1 = _atoi(argv[1]);
	number_2 = _atoi(argv[2]);
	multiplication = number_1 * number_2;

	printf("%d\n", multiplication);
	return (0);
}
