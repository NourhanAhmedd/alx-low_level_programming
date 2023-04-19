#include "3-calc.h"
/**
 * get_op_func - Function that selects the correct function to perform
 * the operation asked by the user.
 * @s: The string.
 * Return: If (s) does not match any of the 5 expected operators, return NULL.
*/
int (*get_op_func(char *s))(int, int)
{
	/* The given code: */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/* From (i = 0) to (i = 4): */
	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
		{
			/* f -> int (*f)(int a, int b) */
			return (ops[i].f);
		}
		i++;
	}
	/* If (s) does not match any of the 5 expected operators, return NULL. */
	return (NULL);
}
