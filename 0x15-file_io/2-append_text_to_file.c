#include "main.h"
/**
 * s_len - Write a function that prints the length.
 * @str: The string.
 * Return: It will return (index).
*/
int s_len(char *str)
{
	int index;

	index = 0;

	/* If condition: */
	if (!str)
	{
		return (0);
	}

	/* While loop: */
	while (*str++)
	{
		index++;
	}

	return (index);
}

/**
 * append_text_to_file - Write a function that appends text at
 * the end of a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string.
 * Return: It will return (b_s == lth ? 1 : -1).
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int f_n;
	ssize_t lth;
	ssize_t b_s;

	lth = s_len(text_content);
	b_s = 0;
	/* If condition: */
	if (!filename)
	{
		return (-1);
	}

	f_n = open(filename, O_WRONLY | O_APPEND);

	/* If condition: */
	if (f_n == -1)
	{
		return (-1);
	}

	/* If condition: */
	if (lth)
	{
		b_s = write(f_n, text_content, lth);
	}

	close(f_n);
	return (b_s == lth ? 1 : -1);
}
