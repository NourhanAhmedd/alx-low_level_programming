#include "main.h"

/**
 * *infinite_add - Function that adds two numbers.
 *
 * @n1: Takes the first input for the function.
 * @n2: Takes the second input for the function.
 * @r: The buffer that the function will use to store the result.
 * @size_r: The buffer size.
 *
 * Return: It will return r.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index1, index2;
	int number1, number2;
	int i, largest = 0, carryout = 0;

	while (n1[index1] != '\0')
		index1++;
	while (n2[index2] != '\0')
		index2++;
	if (index1 > index2)
		largest = index1;
	else
		largest = index2;
	if (largest + 1 > size_r)
		return (0);
	r[largest] = '\0';
	for (i = largest - 1; i >= 0; i--)
	{
		index1--;
		index2--;
		if (index1 >= 0)
			number1 = n1[index1] - '0';
		else
			number1 = 0;
		if (index2 >= 0)
			number2 = n2[index2] - '0';
		else
			number2 = 0;
		r[i] = (number1 + number2 + carryout) % 10 + '0';
		carryout = (number1 + number2 + carryout) / 10;
	}
	if (carryout == 1)
	{
		r[largest + 1] = '\0';
		if (largest + 2 > size_r)
			return (0);
		while (largest-- >= 0)
			r[largest + 1] = r[largest];
		r[0] = carryout + '0';
	}
	return (r);
}
