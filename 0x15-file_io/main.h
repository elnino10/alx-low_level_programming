#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#define BUFF 1204

int _putchar(char);
ssize_t read_textfile(const char *, size_t );
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);

#endif
