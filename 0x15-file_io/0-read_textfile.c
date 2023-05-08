#include "main.h"
/**
 * read_textfile - Write a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: The pointer.
 * @letters: The number of letters.
 * Return: It will return (b_s).
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t b_s;
	char br[BUFFER_S * 8];
	int f_n;

	/* If condition: */
	if (!filename || !letters)
	{
		return (0);
	}

	f_n = open(filename, O_RDONLY);

	/* If condition: */
	if (f_n == -1)
	{
		return (0);
	}

	b_s = read(f_n, &br[0], letters);
	b_s = write(STDOUT_FILENO, &br[0], b_s);
	close(f_n);

	return (b_s);
}
