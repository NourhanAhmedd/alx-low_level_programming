#ifndef V_F_H
#define V_F_H
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_token - The list of types of arguments passed to the function.
 * @format_token: The format.
 * @f_a: The Function (pointer to function).
*/
typedef struct format_token
{
	char *format_token;
	/* va_list: It will hold information needed by other facilities. */
	void (*f_a)(char *, va_list);
} format_t;
#endif /* V_F_H */
