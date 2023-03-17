#include <unistd.h>

/**
 * main - The Entry Point.
 *
 * Description: A C program that prints a sentence using <unistd.h> library.
 *
 * Return: 1 (Failure).
*/

int main(void)
{
	char sent[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, sent, 59);
	return (1);
}
