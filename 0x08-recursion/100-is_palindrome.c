#include "main.h"

/**
 * last_index - Function that prints the last index.
 *
 * @s: Takes input for the function.
 *
 * Return: It will return (number).
*/

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int number = 0;

	if (*s > '\0')
		number += last_index(s + 1) + 1;
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
	int e = last_index(s);

	return (check(s, 0, e - 1, e % 2));
}

/**
 * check - Function that checks the palindrome.
 *
 * @s: Takes input for the function.
 * @start: An integer (Start - from right to left).
 * @end: An integer (End - from left to right).
 * @mod: An integer (mod).
 *
 * Return: It will return (check_palindrome(s, i + 1, e - 1, mod)).
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
