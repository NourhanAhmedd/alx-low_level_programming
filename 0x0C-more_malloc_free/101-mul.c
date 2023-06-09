#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - Function that checks a string.
 *
 * @s: The string.
 *
 * Return: (0) if a non-digit is found or (1).
*/

int is_digit(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] < '0' || s[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/**
 * _strlen - Function that prints the length of a string.
 *
 * @s: The string.
 *
 * Return: It will return (index).
*/

int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * errors - Function that handles the errors.
*/

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Write a program that multiplies two positive numbers.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: It will return (0).
*/

int main(int argc, char *argv[])
{
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;
	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
