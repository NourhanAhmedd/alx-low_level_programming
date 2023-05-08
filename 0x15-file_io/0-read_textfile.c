#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Write a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: The pointer.
 * @letters: The number of letters.
 * Return: It will return (p).
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;
	ssize_t f_name;
	ssize_t p;
	ssize_t l;

	txt = malloc(letters);
	/* If condition: */
	if (txt == NULL)
	{
		return (0);
	}

	/* If condition: */
	if (f_name == NULL)
	{
		return (0);
	}

	file = open(f_name, O_RDONLY);

	/* If condition: */
	if (file == -1)
	{
		free(txt);
		return (0);
	}

	l = read(file, txt, letters);
	p = write(STDOUT_FILENO, txt, l);
	close(file);

	return (p);
}
