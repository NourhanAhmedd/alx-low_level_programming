#include "3-calc.h"
/**
 * op_add - Function that returns the sum of a and b.
 *
 * @a: Takes the first number.
 * @b: Takes the second number.
 *
 * Return: It will return (add).
*/
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}

/**
 * op_sub - Function that returns the difference of a and b.
 *
 * @a: Takes the first number.
 * @b: Takes the second number.
 *
 * Return: It will return (sub).
*/
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - Function that returns the product of a and b.
 *
 * @a: Takes the first number.
 * @b: Takes the second number.
 *
 * Return: It will return (mul).
*/
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - Function that returns the result of the division of a by b.
 *
 * @a: Takes the first number.
 * @b: Takes the second number.
 *
 * Return: It will return (div).
*/
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - Function that returns the remainder of the division of a by b.
 *
 * @a: Takes the first number.
 * @b: Takes the second number.
 *
 * Return: It will return (mod).
*/
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
