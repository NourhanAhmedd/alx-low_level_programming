#include "main.h"
#include <stdio.h>

/**
 * ASCII - Function that determines the value of n.
 *
 * @number: Takes input for the function.
 *
 * Return: It will return (number >= 32 && number <= 126).
*/

int ASCII(int number)
{
	return (number >= 32 && number <= 126);
}

/**
 * hexadecimal - Function that prints hexadecimal numbers.
 *
 * @character: Takes input for the function.
 * @s: Start.
 * @e: End.
*/

void hexadecimal(char *character, int s, int e)
{
	int index = 0;

	while (index < 10)
	{
		if (index < e)
		{
			printf("%02x", *(character + s + index));
		}
		else
		{
			printf("  ");
		}
		if (index % 2)
		{
			printf(" ");
		}
		index++;
	}
}

/**
 * ASCII_Values - Function that prints ASCII values.
 *
 * @character: Takes input for the function.
 * @s: Start.
 * @e: End.
*/

void ASCII_Values(char *character, int s, int e)
{
	int index = 0;
	int c;

	while (index < e)
	{
		c = *(character + index + s);
		if (!ASCII(c))
		{
			c = 46;
		}
		printf("%c", c);
		index++;
	}
}

/**
 * print_buffer - Function that prints a buffer.
 *
 * @b: Takes input for the function.
 * @size: This is the size of buffer.
*/

void print_buffer(char *b, int size)
{
	int s;
	int e;

	if (size > 0)
	{
		for (s = 0; s < size; s = s + 10)
		{
			e = (size - s < 10) ? size - s : 10;
			printf("%08x: ", s);
			hexadecimal(b, s, e);
			ASCII_Values(b, s, e);
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
