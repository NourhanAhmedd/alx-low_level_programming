#include "main.h"
/**
 * get_endianness - Write a function that checks the endianness.
 * void: void.
 * Return: It will return (*(char *)&v) -> (0) or (1).
*/
int get_endianness(void)
{
	unsigned long int v;

	v = 1;
	/* return (*(char *)&v) */
	return (*(char *)&v);
}
