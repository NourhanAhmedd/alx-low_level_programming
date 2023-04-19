#include "3-calc.h"
/**
 * main - This file should contain your main function only.
 *
 * @argc: Argument Count.
 * @argv: Argument Vector.
 *
 * Return: 0 (Success).
*/
int main(int argc, int char **argv)
{
	int (*operation_function)(int, int), n1, n2;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operation_function = get_op_func(argv[2]);

	if (!operation_function)
	{
		printf("Error\n"), exit(99);
	}

	if (!n2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n"), exit(100);
	}

	printf("%d\n", operation_function(n1, n2));
	return (0);
}
