#include "main.h"

/**
 * _puts - Function that prints a string.
 *
 * @s: Takes input for the function.
*/

void _puts(char *s)
{
	int index = 0;

	while (s[index])
	{
		_putchar(s[index]);
		index++;
	}
}

/**
 * _atoi - Function that converts (string to integer).
 *
 * @str: The string.
 *
 * Return: It will return (s * r).
*/

int _atoi(const char *str)
{
	int s = 1;
	unsigned long int r = 0;
	unsigned long int index;
	unsigned long int number1;

	for (number1 = 0; !(str[number1] >= 48 && str[number1] <= 57); number1++)
	{
		if (str[number] == '-')
		{
			s = s * -1;
		}
	}
	for (index = number1; str[index] >= 48 && str[index] <= 57; index++)
	{
		r = r * 10;
		r = r + (str[index] - 48);
	}
	return (s * r);
}

/**
 * print_integer - Function that prints an integer.
 *
 * @n: Takes input for the function.
*/

void print_integer(unsigned long int n)
{
	unsigned long int index;
	unsigned long int r;
	unsigned long int d = 1;

	for (index = 0; n / d > 9; index++, d = d * 10)
		;
	for (; d >= 1; n = n % d, d = d / 10)
	{
		r = n / d;
		_putchar('0' + r);
	}
}

/**
 * main - Write a program that multiplies two positive numbers.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: It will return (0).
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_integer(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
