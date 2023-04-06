#include "main.h"

/**
 * prime_number - Function that checks if the numbers can divide the n.
 *
 * @n: Takes input for the function.
 * @i: Takes input for the function.
 *
 * Return: It will return integer.
*/

int prime_number(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, i + 1));
	}
}

/**
 * is_prime_number - Function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: Takes input for the function.
 *
 * Return: It will return (prime_number(n, 2)).
*/

int is_prime_number(int n)
{
	return (prime_number(n, 2));
}
