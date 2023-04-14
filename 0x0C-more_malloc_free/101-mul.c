#include "main.h"

/**
 * _puts - Function that prints a string.
 *
 * @str: Takes input for the function.
*/

void _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
}

/**
 * _atoi - Function that converts (string to integer).
 *
 * @s: The string.
 *
 * Return: It will return (d * r).
*/

int _atoi(const char *s)
{
	int d = 1;
	unsigned long int r = 0;
	unsigned long int index;
	unsigned long int number1;

	for (number1 = 0; !(s[number1] >= 48 && s[number1] <= 57); number1++)
	{
		if (s[number] == '-')
		{
			d *= -1;
		}
	}
	for (index = number1; s[index] >= 48 && s[index] <= 57; index++)
	{
		r *= 10;
		r += (s[index] - 48);
	}
	return (d * r);
}

/**
 * print_int - Function that prints an integer.
 *
 * @n: Takes input for the function.
*/

void print_int(unsigned long int n)
{
	unsigned long int index;
	unsigned long int r;
	unsigned long int d = 1;

	for (index = 0; n / d > 9; index++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
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
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
