#include "main.h"

/**
 * *rot13 - Function that encodes a string using rot13.
 *
 * @str: Takes input for the function.
 *
 * Return: It will return pointer.
*/

char *rot13(char *str)
{
	int index;
	char *pointer = str;
	char Rot_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char rot_13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*str)
	{
		for (index = 0; index <= 52; index++)
		{
			if (*str == rot_13[index])
			{
				*str = Rot_13[index];
				break;
			}
		}
		str++;
	}
	return (pointer);
}
