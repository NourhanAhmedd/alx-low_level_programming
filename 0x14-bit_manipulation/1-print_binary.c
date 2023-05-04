#include "main.h"
/**
 * print_binary - Write a function that prints the binary
 * representation of a number.
 * @n: The number (input).
*/
void print_binary(unsigned long int n)
{
	int pr = 0;
	int the_bit;

	pr = 0;
	the_bit = sizeof(n) * 8;
	/* While loop: */
	while (the_bit)
	{
		/* If condition: */
		if (n & 1L << --the_bit)
		{
			_putchar('1');
			pr++;
		}

		else if (pr)
		{
			_putchar('0');
		}
	}

	/* If condition: */
	if (!pr)
	{
		_putchar('0');
	}
}
