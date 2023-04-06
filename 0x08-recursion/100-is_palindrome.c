#include "main.h"

/**
 * index - Function that prints the last index.
 *
 * @s: Takes input for the function.
 *
 * Return: It will return (number).
*/

int is_palindrome(char *s);
int check_palindrome(char *s, int i, int e, int m);
int index(char *s)
{
	int number = 0;

	if (*s > '\0')
	{
		number = number + index(s + 1) + 1;
	}
	return (number);
}

/**
 * is_palindrome - Function that returns 1 if a string is
 * a palindrome and 0 if not.
 *
 * @s: Takes input for the function.
 *
 * Return: It will return (check_palindrome(s, 0, e - 1, e % 2)).
*/

int is_palindrome(char *s)
{
	int e = index(s);

	return (check_palindrome(s, 0, e - 1, e % 2));
}

/**
 * check_palindrome - Function that checks the palindrome.
 *
 * @s: Takes input for the function.
 * @i: An integer (Start - from right to left).
 * @e: An integer (End - from left to right).
 * @m: An integer (mod).
 *
 * Return: It will return (check_palindrome(s, i + 1, e - 1, mod)).
*/

int check_palindrome(char *s, int i, int e, int m)
{
	if ((i == e && m != 0) || (i == e + 1 && m == 0))
	{
		return (1);
	}
	else if (s[i] != s[e])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s, i + 1, e - 1, mod));
	}
}
