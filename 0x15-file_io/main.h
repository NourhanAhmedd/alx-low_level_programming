#ifndef C_FILE_IO
#define C_FILE_IO

/* The libraries: */
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/* The Prototypes: */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char character);
#endif /* C_FILE_IO */
