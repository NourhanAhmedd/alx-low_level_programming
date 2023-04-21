#ifndef V_F_H
#define V_F_H
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct token - The list of types of arguments passed to the function.
 * @token: The format.
 * @f: The Function (pointer to function).
*/
typedef struct token
{
	char *token;
	/* va_list: It will hold information needed by other facilities. */
	void (*f)(char *, va_list);
} token_t;
#endif /* V_F_H */
