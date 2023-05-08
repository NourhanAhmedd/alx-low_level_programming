#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* define: */
#define USAGE "Usage: cp file_from file_to\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
/**
 * main - Write a program that copies the content of a file to another file.
 * @argc: The Arg Count.
 * @argv: The Arg Vector.
 * Return: It will return (EXIT_SUCCESS).
*/
int main(int argc, char **argv)
{
	ssize_t s;
	int s_f_n;
	int e_f_n;
	char br[BUFFER_S];

	s_f_n = 0
	e_f_n = 0;
	/* If condition: */
	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	s_f_n = open(av[1], O_RDONLY);
	/* If condition: */
	if (s_f_n == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	e_f_n = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	/* If condition: */
	if (e_f_n == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	/* While loop: */
	while ((s = read(s_f_n, br, READ_BUF_SIZE)) > 0)
	{
		if (write(e_f_n, br, s) != s)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]);
			exit(99);
		}
	}
	/* If condition: */
	if (s == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	s_f_n = close(s_f_n);
	e_f_n = close(e_f_n);
	/* If condition: */
	if (s_f_n)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, s_f_n), exit(100);
	/* If condition: */
	if (e_f_n)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, s_f_n), exit(100);

	return (EXIT_SUCCESS);
}
