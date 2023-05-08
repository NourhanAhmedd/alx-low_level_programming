#ifndef C_FILE_IO
#define C_FILE_IO

/* The libraries: */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_S 1024

/* The Prototypes: */
int _putchar(char character);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* C_FILE_IO */
